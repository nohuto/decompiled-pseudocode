/*
 * XREFs of LdrpGetProcApphelpCheckModule @ 0x1801180E0
 * Callers:
 *     LdrpPrepareModuleForExecution @ 0x18011ADA0 (LdrpPrepareModuleForExecution.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x180051A00 (LdrpLoadDll.c)
 *     LdrpBuildSystem32FileName @ 0x1800BE800 (LdrpBuildSystem32FileName.c)
 *     LdrpGetShimEngineInterface @ 0x18011DA94 (LdrpGetShimEngineInterface.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpGetProcApphelpCheckModule(_QWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  int Dll; // ebx
  int ShimEngineInterface; // eax
  __int64 v9; // rdx
  __int64 v10; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v11[3]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v12; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v13; // [rsp+70h] [rbp-90h]
  __int128 v14; // [rsp+80h] [rbp-80h]
  __int128 v15; // [rsp+90h] [rbp-70h]
  __int128 v16; // [rsp+A0h] [rbp-60h]
  __int128 v17; // [rsp+B0h] [rbp-50h]
  __int128 v18; // [rsp+C0h] [rbp-40h]
  __int128 v19; // [rsp+D0h] [rbp-30h]
  char v20[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v21; // [rsp+E4h] [rbp-1Ch]
  __int16 *v22; // [rsp+E8h] [rbp-18h]
  __int16 v23; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v24[254]; // [rsp+F2h] [rbp-Eh] BYREF

  v11[0] = 1572886LL;
  v11[1] = L"apphelp.dll";
  v2 = 0;
  v21 = 0;
  v10 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  memset_thunk_772440563353939046(v24, 0, 0xFEuLL);
  *(_DWORD *)v20 = 0x1000000;
  v22 = &v23;
  v23 = 0;
  if ( g_pfnApphelpCheckModuleProc )
  {
    v5 = __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
    *a1 = v5;
    if ( !v5 )
      return (unsigned int)-1073741823;
    return v2;
  }
  else
  {
    Dll = LdrpBuildSystem32FileName((unsigned __int16 *)v20, (unsigned __int16 *)v11, v3, v4);
    if ( Dll >= 0 )
    {
      DWORD2(v13) = 0x4000;
      *(_QWORD *)&v14 = 0LL;
      Dll = LdrpLoadDll((unsigned __int16 *)v20, (__int64)&v12, 0, (__int64)&v10);
      LdrpReleaseDllPath((__int64)&v12);
      if ( Dll >= 0 )
      {
        *(_DWORD *)(v10 + 104) |= 0x100u;
        g_pShimEngineModule = *(_QWORD *)(v10 + 48);
        ShimEngineInterface = LdrpGetShimEngineInterface();
        Dll = ShimEngineInterface;
        if ( ShimEngineInterface >= 0 )
        {
          Dll = -1073741823;
          v9 = __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
          *a1 = v9;
          if ( v9 )
            Dll = 0;
        }
        else
        {
          LdrpLogInternal(
            (int)"minkernel\\ldr\\ldrinit.c",
            4007,
            (__int64)"LdrpGetProcApphelpCheckModule",
            0,
            "Getting the shim engine exports failed with status 0x%08lx\n",
            ShimEngineInterface);
        }
      }
      else
      {
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrinit.c",
          3996,
          (__int64)"LdrpGetProcApphelpCheckModule",
          0,
          "Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
          v20,
          Dll);
      }
    }
    if ( &v23 != v22 )
      RtlFreeHeap_0();
    return (unsigned int)Dll;
  }
}
