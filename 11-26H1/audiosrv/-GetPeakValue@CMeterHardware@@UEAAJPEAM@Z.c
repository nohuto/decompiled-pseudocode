/*
 * XREFs of ?GetPeakValue@CMeterHardware@@UEAAJPEAM@Z @ 0x180069000
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMeterHardware::GetPeakValue(CMeterHardware *this, float *a2)
{
  int v2; // ebx
  float v5; // xmm6_4
  unsigned int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // eax
  float *v9; // rcx
  __int64 v10; // rdx
  float v11; // xmm0_4
  float v12; // xmm6_4
  _DWORD v14[32]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  if ( *((_QWORD *)this + 5) )
  {
    v6 = *((_DWORD *)this + 6);
    if ( v6 > 0x20 )
      return 2147942487LL;
    v7 = 0LL;
    if ( v6 )
    {
      do
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**((_QWORD **)this + 5) + 32LL))(
               *((_QWORD *)this + 5),
               (unsigned int)v7,
               &v14[v7]);
        if ( v2 < 0 )
          v14[v7] = 0;
        v8 = *((_DWORD *)this + 6);
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < v8 );
      if ( v8 )
      {
        v9 = (float *)v14;
        v10 = v8;
        do
        {
          v11 = *v9++;
          v5 = fmaxf(v11, v5);
          --v10;
        }
        while ( v10 );
      }
    }
  }
  v12 = fminf(v5, 1.0);
  if ( v12 <= 0.0 )
    v12 = 0.0;
  *a2 = v12;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterHardware::GetPeakValue", 461, v2);
  return (unsigned int)v2;
}
