/*
 * XREFs of NtGdiAddFontMemResourceEx @ 0x14010D100
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x140017E24 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z @ 0x14010D2A4 (-GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z.c)
 *     ?GrepRemoveFontMemResource@@YAHPEAX@Z @ 0x14021AF00 (-GrepRemoveFontMemResource@@YAHPEAX@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void *__fastcall NtGdiAddFontMemResourceEx(void *a1, unsigned int a2, _BYTE *a3, unsigned int a4, ULONG64 a5)
{
  size_t v5; // r12
  _BYTE *v6; // r15
  unsigned int v7; // ebx
  int v9; // edi
  void *v10; // r14
  _DWORD *v11; // rsi
  unsigned int v13; // [rsp+30h] [rbp-C8h] BYREF
  int v14; // [rsp+34h] [rbp-C4h]
  unsigned int v15; // [rsp+38h] [rbp-C0h]
  unsigned int v16; // [rsp+40h] [rbp-B8h]
  _BYTE *v17; // [rsp+48h] [rbp-B0h]
  void *v18; // [rsp+50h] [rbp-A8h]
  void *v19; // [rsp+58h] [rbp-A0h]
  _BYTE v20[4]; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v21; // [rsp+64h] [rbp-94h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v13 = a2;
  v19 = a1;
  v15 = a2;
  v17 = a3;
  v16 = a4;
  v9 = 1;
  v14 = 1;
  v10 = 0LL;
  memset_0(v20, 0, 0x48uLL);
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
    return 0LL;
  if ( !v7 )
    return 0LL;
  if ( !a1 )
    return 0LL;
  v11 = (_DWORD *)a5;
  if ( !a5 )
    return 0LL;
  if ( (_DWORD)v5 )
  {
    if ( (unsigned int)v5 > 0x48 )
    {
      v9 = 0;
      v14 = 0;
    }
    else
    {
      if ( (unsigned __int64)v6 >= MmUserProbeAddress )
        v6 = (_BYTE *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v20, v6, v5);
      v6 = v20;
      v17 = v20;
      if ( v5 != 4LL * v21 + 8 )
      {
        v9 = 0;
        v14 = 0;
      }
      v7 = v13;
    }
  }
  else
  {
    v6 = 0LL;
    v17 = 0LL;
  }
  if ( v9 )
  {
    v13 = 0;
    v10 = GrepAddFontMemResource(a1, v7, (struct tagDESIGNVECTOR *)v6, v5, &v13);
    v18 = v10;
    if ( v10 )
    {
      if ( a5 >= MmUserProbeAddress )
        v11 = (_DWORD *)MmUserProbeAddress;
      *v11 = v13;
    }
  }
  return v10;
}
