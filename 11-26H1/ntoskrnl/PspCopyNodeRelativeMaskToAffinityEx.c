/*
 * XREFs of PspCopyNodeRelativeMaskToAffinityEx @ 0x140CDE278
 * Callers:
 *     PsInitializeBootCpuPartitions @ 0x140CDDE44 (PsInitializeBootCpuPartitions.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140470380 (KeQueryNodeActiveAffinityEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PspCopyNodeRelativeMaskToAffinityEx(unsigned __int16 a1, __int64 a2, unsigned __int16 *a3)
{
  size_t v6; // r8
  __int64 result; // rax
  unsigned __int16 i; // cx
  unsigned int v9; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v10; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h]
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v13[33]; // [rsp+48h] [rbp-B8h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  memset_0(v13, 0, 0x100uLL);
  v6 = 8LL * *a3;
  v9 = 0;
  memset_0(a3 + 4, 0, v6);
  v12 = 2097153LL;
  *a3 = 1;
  memset_0(v13, 0, 0x100uLL);
  result = (__int64)KeQueryNodeActiveAffinityEx(a1, (unsigned __int16 *)&v12, 0LL);
  for ( i = 0; i < (unsigned __int16)v12; ++i )
  {
    result = i;
    if ( v13[i] )
    {
      *((_QWORD *)&v10 + 1) = v13[0];
      *(_QWORD *)&v10 = &v12;
      while ( 1 )
      {
        result = KeEnumerateNextProcessor(&v9, (unsigned __int16 **)&v10);
        if ( (_DWORD)result )
          break;
        if ( ((*(char *)(((unsigned __int64)*(unsigned int *)(KiProcessorBlock[v9] + 47400) >> 3) + *(_QWORD *)(a2 + 8)) >> (*(_DWORD *)(KiProcessorBlock[v9] + 47400) & 7)) & 1) != 0 )
          KeAddProcessorAffinityEx(a3, v9);
      }
      return result;
    }
  }
  return result;
}
