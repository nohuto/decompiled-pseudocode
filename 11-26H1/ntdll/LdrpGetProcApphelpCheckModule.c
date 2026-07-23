/*
 * XREFs of LdrpGetProcApphelpCheckModule @ 0x180117E90
 * Callers:
 *     LdrpPrepareModuleForExecution @ 0x18011AB50 (LdrpPrepareModuleForExecution.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpReleaseDllPath @ 0x18003B980 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18003BF80 (LdrpLoadDll.c)
 *     LdrpBuildSystem32FileName @ 0x1800BC260 (LdrpBuildSystem32FileName.c)
 *     LdrpGetShimEngineInterface @ 0x18011D844 (LdrpGetShimEngineInterface.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpGetProcApphelpCheckModule(_QWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  int v5; // ebx
  int ShimEngineInterface; // eax
  __int64 v7; // rdx
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v9[3]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v10; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v11; // [rsp+70h] [rbp-90h]
  __int128 v12; // [rsp+80h] [rbp-80h]
  __int128 v13; // [rsp+90h] [rbp-70h]
  __int128 v14; // [rsp+A0h] [rbp-60h]
  __int128 v15; // [rsp+B0h] [rbp-50h]
  __int128 v16; // [rsp+C0h] [rbp-40h]
  __int128 v17; // [rsp+D0h] [rbp-30h]
  _UNICODE_STRING v18; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v19; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v20[254]; // [rsp+F2h] [rbp-Eh] BYREF

  v9[0] = 1572886LL;
  v9[1] = L"apphelp.dll";
  v2 = 0;
  *(_DWORD *)(&v18.MaximumLength + 1) = 0;
  v8 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  memset_thunk_772440563353939046(v20, 0, 0xFEuLL);
  *(_DWORD *)&v18.Length = 0x1000000;
  v18.Buffer = (wchar_t *)&v19;
  v19 = 0;
  if ( g_pfnApphelpCheckModuleProc )
  {
    v3 = __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
    *a1 = v3;
    if ( !v3 )
      return (unsigned int)-1073741823;
    return v2;
  }
  else
  {
    v5 = LdrpBuildSystem32FileName(&v18.Length, (unsigned __int16 *)v9);
    if ( v5 >= 0 )
    {
      DWORD2(v11) = 0x4000;
      *(_QWORD *)&v12 = 0LL;
      v5 = LdrpLoadDll(&v18, (__int64)&v10, 0, (__int64)&v8);
      LdrpReleaseDllPath((__int64)&v10);
      if ( v5 >= 0 )
      {
        *(_DWORD *)(v8 + 104) |= 0x100u;
        g_pShimEngineModule = *(PVOID *)(v8 + 48);
        ShimEngineInterface = LdrpGetShimEngineInterface();
        v5 = ShimEngineInterface;
        if ( ShimEngineInterface >= 0 )
        {
          v5 = -1073741823;
          v7 = __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
          *a1 = v7;
          if ( v7 )
            v5 = 0;
        }
        else
        {
          LdrpLogInternal(
            "minkernel\\ldr\\ldrinit.c",
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
          "minkernel\\ldr\\ldrinit.c",
          3996,
          (__int64)"LdrpGetProcApphelpCheckModule",
          0,
          "Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
          &v18,
          v5);
      }
    }
    if ( &v19 != (__int16 *)v18.Buffer )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v18.Buffer);
    return (unsigned int)v5;
  }
}
