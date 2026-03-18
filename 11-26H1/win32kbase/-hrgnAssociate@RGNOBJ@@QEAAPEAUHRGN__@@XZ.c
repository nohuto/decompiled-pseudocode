/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1400C2A7C
 * Callers:
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1400C0C00 (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     PushThreadGuardedObject @ 0x140030350 (PushThreadGuardedObject.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 */

struct HOBJ__ *__fastcall RGNOBJ::hrgnAssociate(struct OBJECT **this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  struct OBJECT *v3; // rbx
  struct HOBJ__ *inserted; // rax
  struct OBJECT *v5; // rcx
  struct HOBJ__ *v6; // rdi
  _OWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  struct OBJECT *v9; // [rsp+40h] [rbp-18h]
  char v10; // [rsp+48h] [rbp-10h]

  v2 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(this) + 88);
  memset(v8, 0, sizeof(v8));
  PushThreadGuardedObject(
    v8,
    (__int64)v8,
    (__int64)UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
  v3 = *this;
  v9 = 0LL;
  v10 = 0;
  inserted = HmgInsertObjectInternal(v2, v3, 1u, 4u);
  v5 = v9;
  v6 = inserted;
  if ( inserted )
    v5 = v3;
  v9 = v5;
  if ( v5 && !v10 )
    _InterlockedDecrement16((volatile signed __int16 *)v5 + 6);
  PopThreadGuardedObject(v8);
  return v6;
}
