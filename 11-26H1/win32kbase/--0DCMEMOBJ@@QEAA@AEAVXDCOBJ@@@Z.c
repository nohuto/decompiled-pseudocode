/*
 * XREFs of ??0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140164BA0
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     PushThreadGuardedObject @ 0x140030350 (PushThreadGuardedObject.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400347AC (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?FreeObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAXK@Z @ 0x140034CA0 (-FreeObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAXK@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 *     ?AllocateObject@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z @ 0x140165010 (-AllocateObject@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, struct XDCOBJ *a2)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rcx
  _DWORD *Object; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  struct Gre::Base::SESSION_GLOBALS *v8; // rcx
  struct OBJECT *v9; // rdx
  _OWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]
  char v13; // [rsp+48h] [rbp-10h]

  v3 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)a2 + 2);
  *((_QWORD *)this + 2) = v3;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 8) = 0;
  Object = AllocateObject(v3, 0x880u, 1u);
  *(_QWORD *)this = Object;
  if ( Object )
  {
    Object[9] = 0;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = 0;
    v6 = *(_QWORD *)this;
    *(_QWORD *)(v6 + 1112) = 0LL;
    *(_QWORD *)(v6 + 1120) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 1136LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 48LL) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    *(_QWORD *)(*(_QWORD *)this + 976LL) = *(_QWORD *)this + 544LL;
    DC::vCopyTo(*(DC **)a2, this);
    memset(v11, 0, sizeof(v11));
    PushThreadGuardedObject(
      v11,
      (__int64)v11,
      (__int64)UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
    v7 = *(_QWORD *)this;
    v8 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)this + 2);
    v9 = *(struct OBJECT **)this;
    v12 = 0LL;
    v13 = 1;
    if ( HmgInsertObjectInternal(v8, v9, 0x11u, 1u) )
    {
      v12 = v7;
    }
    else
    {
      FreeObject(*((void ***)this + 2), *(void **)this, 1u);
      v7 = v12;
      *(_QWORD *)this = 0LL;
    }
    if ( v7 && !v13 )
      _InterlockedDecrement16((volatile signed __int16 *)(v7 + 12));
    PopThreadGuardedObject(v11);
  }
  return this;
}
