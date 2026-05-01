/*
 * XREFs of ?ApplyGameRelatedForGameModeProcess@BroadcastDVRComponent@@AEAAXKAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x18004FEF8
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18004ECD4 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ?ApplyGameRelatedForRelatedProcess@BroadcastDVRComponent@@AEAAXKGK@Z @ 0x180310CA4 (-ApplyGameRelatedForRelatedProcess@BroadcastDVRComponent@@AEAAXKGK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall BroadcastDVRComponent::ApplyGameRelatedForGameModeProcess(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r12
  __int64 v9; // rdi
  unsigned int i; // r14d
  char *v11; // rbx
  PCWSTR StringRawBuffer; // rax
  BroadcastDVRComponent *v13; // rcx
  void *v14; // rcx
  bool v15; // zf
  void *v16; // rcx
  void *v17; // [rsp+38h] [rbp-18h] BYREF
  char v18; // [rsp+40h] [rbp-10h]
  unsigned int v19; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v20; // [rsp+98h] [rbp+48h]
  LPVOID pv; // [rsp+A8h] [rbp+58h]

  v20 = a2;
  v19 = 0;
  pv = 0LL;
  v4 = *(__int64 **)(a1 + 256);
  v5 = *v4;
  v17 = 0LL;
  v18 = 1;
  v6 = (*(unsigned int (__fastcall **)(__int64 *, __int64, unsigned int *, void **))(v5 + 96))(v4, a2, &v19, &v17) >> 31;
  if ( v18 )
  {
    v16 = pv;
    pv = v17;
    if ( v16 )
      CoTaskMemFree(v16);
  }
  if ( !(_BYTE)v6 )
  {
    v7 = 0;
    if ( (__int64)(a3[1] - *a3) >> 4 )
    {
      v8 = 0LL;
      v9 = 0LL;
      do
      {
        for ( i = 0; i < v19; ++i )
        {
          v11 = (char *)pv;
          StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*a3 + 16 * v8 + 8), 0LL);
          if ( !(unsigned int)_o__wcsicmp(StringRawBuffer, &v11[62 * i + 2]) )
          {
            BroadcastDVRComponent::ApplyGameRelatedForRelatedProcess(
              v13,
              *(_DWORD *)(*a3 + 16 * v9),
              *((_WORD *)pv + 31 * i),
              v20);
            break;
          }
        }
        v9 = ++v7;
        v8 = v7;
      }
      while ( v7 < (unsigned __int64)((__int64)(a3[1] - *a3) >> 4) );
    }
  }
  v14 = pv;
  v15 = pv == 0LL;
  pv = 0LL;
  if ( !v15 )
    CoTaskMemFree(v14);
}
