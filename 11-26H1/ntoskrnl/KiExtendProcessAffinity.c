/*
 * XREFs of KiExtendProcessAffinity @ 0x1405FBEA8
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeSetUserAffinityThread @ 0x1403F0B04 (KeSetUserAffinityThread.c)
 * Callees:
 *     KeComputeGroupMask @ 0x140200A08 (KeComputeGroupMask.c)
 *     KiSetIdealNodeProcessByGroup @ 0x1404ADD98 (KiSetIdealNodeProcessByGroup.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KiExtendProcessAffinity(__int64 a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  char v5; // bp
  unsigned __int16 v6; // bx
  unsigned __int16 *v7; // r8
  unsigned __int16 *v8; // rdx
  __int64 v9; // r10
  __int64 v10; // r9
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF

  result = *a2;
  v5 = 0;
  v6 = 0;
  v11 = 0LL;
  if ( (_WORD)result )
  {
    while ( v6 >= (unsigned __int16)result
         || !*(_QWORD *)&a2[4 * v6 + 4]
         || v6 >= *(_WORD *)&stru_140FC11F0.WaitRegister.Flags
         || !*(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * v6 + 4) )
    {
LABEL_18:
      result = *a2;
      if ( ++v6 >= (unsigned __int16)result )
      {
        if ( v5 )
        {
          result = KeComputeGroupMask(*(unsigned __int16 **)(a1 + 80), &v11);
          *(_OWORD *)(a1 + 152) = v11;
        }
        return result;
      }
    }
    v7 = *(unsigned __int16 **)(a1 + 80);
    v8 = &v7[4 * v6];
    if ( v6 >= *v7 )
      v9 = 0LL;
    else
      v9 = *((_QWORD *)v8 + 1);
    if ( v6 >= *(_WORD *)&stru_140FC11F0.WaitRegister.Flags )
      v10 = 0LL;
    else
      v10 = *(__int64 *)((char *)&stru_140FC11F0.116 + 8 * v6 + 4);
    if ( *v7 <= v6 )
    {
      if ( v7[1] <= v6 )
        goto LABEL_16;
      *v7 = v6 + 1;
    }
    *((_QWORD *)v8 + 1) |= v10;
LABEL_16:
    if ( !v9 )
    {
      KiSetIdealNodeProcessByGroup(a1, 0LL, v6);
      v5 = 1;
    }
    goto LABEL_18;
  }
  return result;
}
