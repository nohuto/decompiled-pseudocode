/*
 * XREFs of CmpLockIXLockExclusive @ 0x1408C2F20
 * Callers:
 *     CmSetKeyFlags @ 0x1408B6EC8 (CmSetKeyFlags.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408C45DC (CmpSetKeySecurity.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140ABAA1C (CmpUndoDeleteKeyForTrans.c)
 *     CmSetLastWriteTimeKey @ 0x140B56450 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmEqualTrans @ 0x1408C2FA0 (CmEqualTrans.c)
 */

char __fastcall CmpLockIXLockExclusive(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v3; // eax

  v3 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 )
  {
    if ( v3 >= 0 )
    {
      if ( v3 != 1 || !(unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), a2[7], a3) )
        return 0;
      *(_DWORD *)a1 |= 0x80000000;
    }
    else if ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), a2[7], a3) )
    {
      return 0;
    }
  }
  else
  {
    *(_DWORD *)a1 = -2147483647;
    *(_QWORD *)(a1 + 8) = a2;
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
        a2[3] = a1;
    }
    else
    {
      a2[2] = a1;
    }
  }
  return 1;
}
