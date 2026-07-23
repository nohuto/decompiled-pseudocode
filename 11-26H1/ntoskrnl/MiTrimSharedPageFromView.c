/*
 * XREFs of MiTrimSharedPageFromView @ 0x140465634
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140A89498 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiReleaseTrimViewResources @ 0x140361E24 (MiReleaseTrimViewResources.c)
 *     MiTrimViewLockSystemPte @ 0x1403A8480 (MiTrimViewLockSystemPte.c)
 *     MiDeleteActiveTrimView @ 0x1404657B4 (MiDeleteActiveTrimView.c)
 *     MiTrimViewLeafPte @ 0x1404658E4 (MiTrimViewLeafPte.c)
 *     MiTrimViewVaIsCandidate @ 0x140465B88 (MiTrimViewVaIsCandidate.c)
 *     MiTrimViewPrepare @ 0x140465C3C (MiTrimViewPrepare.c)
 *     MiTrimViewLockProcessPte @ 0x140465EA0 (MiTrimViewLockProcessPte.c)
 */

__int64 __fastcall MiTrimSharedPageFromView(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rdx
  bool v8; // zf
  unsigned __int64 v9; // rcx
  int v10; // eax
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  *((_BYTE *)a1 + 264) = 17;
  *((_QWORD *)a1 + 8) = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  *((_QWORD *)a1 + 34) = v4;
  v4 >>= 12;
  *((_QWORD *)a1 + 35) = v4;
  v5 = (*(_QWORD *)(a2 + 24) >> 12) - v4;
  v11 = 0LL;
  *((_QWORD *)a1 + 36) = *(_QWORD *)(a2 + 32);
  result = MiTrimViewPrepare();
  if ( (int)result >= 0 )
  {
    while ( 1 )
    {
      if ( !v5 )
      {
LABEL_13:
        MiDeleteActiveTrimView(a1);
        return *a1;
      }
      if ( *((_QWORD *)a1 + 3) && ((*((_QWORD *)a1 + 34) >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL != *((_QWORD *)a1 + 7) )
        MiReleaseTrimViewResources((__int64)a1, v7);
      if ( !*((_QWORD *)a1 + 8) )
        break;
      a1[74] = 0;
      v10 = MiTrimViewLockProcessPte(a1, &v11);
      if ( v10 >= 0 )
        goto LABEL_10;
      if ( v10 != -1073741267 )
      {
        if ( !v11 )
          goto LABEL_13;
        v9 = (v11 >> 12) - *((_QWORD *)a1 + 35);
        if ( v9 >= v5 )
          goto LABEL_13;
LABEL_11:
        *((_QWORD *)a1 + 35) += v9;
        *((_QWORD *)a1 + 34) += v9 << 12;
        *((_QWORD *)a1 + 36) += v9 << 12;
        v5 -= v9;
      }
    }
    v8 = *((_QWORD *)a1 + 3) == 0LL;
    a1[74] = 1;
    if ( v8 && (int)MiTrimViewLockSystemPte((__int64)a1) < 0
      || !*(_DWORD *)(a2 + 40) && (int)MiTrimViewVaIsCandidate(a1) < 0 )
    {
      goto LABEL_13;
    }
LABEL_10:
    MiTrimViewLeafPte(a1, a2);
    v9 = 1LL;
    goto LABEL_11;
  }
  return result;
}
