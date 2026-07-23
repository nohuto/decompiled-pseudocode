/*
 * XREFs of KiFlushSingleTbWorker @ 0x1405FF3C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x14072D090 (KiSetUserTbFlushPending.c)
 */

__int64 __fastcall KiFlushSingleTbWorker(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h]

  v3 = *(void **)a1;
  result = (unsigned int)(*(_DWORD *)(a1 + 8) - 1);
  if ( (unsigned int)result <= 1 )
  {
    if ( KiFlushPcid )
    {
      result = (__int64)KeGetCurrentThread();
      v5 = *(_QWORD *)(result + 184);
      if ( !*(_BYTE *)(v5 + 352) )
      {
        if ( (KiFlushPcid & 2) != 0 )
        {
          *(_QWORD *)&v6 = 1LL;
          *((_QWORD *)&v6 + 1) = v3;
          result = 0LL;
          __asm { invpcid eax, [rsp+48h+var_28] }
        }
        else
        {
          result = KiSetUserTbFlushPending(v5, 0LL, a3);
        }
      }
    }
  }
  __invlpg(v3);
  return result;
}
