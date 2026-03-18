/*
 * XREFs of hCreateSolidBrushInternal @ 0x140034D00
 * Callers:
 *     SetSysColor @ 0x14003405C (SetSysColor.c)
 *     GreCreateSolidBrush @ 0x140034CE0 (GreCreateSolidBrush.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140033AE4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140034DD0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 */

unsigned __int64 __fastcall hCreateSolidBrushInternal(unsigned int a1, int a2, HBRUSH a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 SessionState; // rax
  unsigned int *v8; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-38h] BYREF
  int v10; // [rsp+60h] [rbp-18h]

  v4 = 0LL;
  if ( a3 )
    return (unsigned __int64)a3 & -(__int64)((unsigned int)GreSetSolidBrushInternal(a3, a1, a2, 0) != 0);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)&v8, a1, 7u, a2, a4);
  if ( v8 )
  {
    v10 = 1;
    v8[10] |= 4u;
    v4 = *(_QWORD *)v8;
    SessionState = W32GetSessionState(v5);
    HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v8);
    if ( !v10 )
      bDeleteBrush(*(HBRUSH *)v8);
    v8 = 0LL;
  }
  PopThreadGuardedObject(v9);
  return v4;
}
