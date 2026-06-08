/*
 * XREFs of RegisterKernelPackage @ 0x140039080
 * Callers:
 *     <none>
 * Callees:
 *     InitializePhysicalCores @ 0x14000DB68 (InitializePhysicalCores.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RegisterKernelPackage(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 Pool2; // rax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rdx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400191A8,
    0LL);
  if ( *(_DWORD *)(a1 + 80) )
    v2 = HalPrivateDispatchTable[144](*(unsigned int *)(a1 + 84));
  else
    v2 = ((__int64 (__fastcall *)(_QWORD))qword_140019598)(*(unsigned int *)(a1 + 56));
  v3 = v2;
  v4 = qword_140019208;
  if ( (__int64 *)qword_140019208 == &qword_140019208 )
    goto LABEL_8;
  do
  {
    v5 = v4;
    if ( *(_DWORD *)(v4 + 32) == v3 )
      break;
    v4 = *(_QWORD *)v4;
    v5 = 0LL;
  }
  while ( (__int64 *)v4 != &qword_140019208 );
  if ( !v5 )
  {
LABEL_8:
    Pool2 = ExAllocatePool2(64LL, 616LL, 1919119952LL);
    v5 = Pool2;
    if ( !Pool2 )
    {
      v7 = -1073741670;
      goto LABEL_16;
    }
    *(_DWORD *)(Pool2 + 32) = v3;
    v8 = ((__int64 (__fastcall *)(_QWORD))qword_1400195A0)(v3);
    *(_DWORD *)(v5 + 36) = v8;
    *(_DWORD *)(v5 + 36) = v8 + HalPrivateDispatchTable[145](v3);
    KeInitializeAffinityEx2(v5 + 48, 32LL);
    KeInitializeAffinityEx2(v5 + 344, 32LL);
    *(_QWORD *)(v5 + 24) = v5 + 16;
    *(_QWORD *)(v5 + 16) = v5 + 16;
    *(_QWORD *)(v5 + 328) = v5 + 320;
    *(_QWORD *)(v5 + 320) = v5 + 320;
    v9 = (__int64 *)qword_140019210;
    if ( *(__int64 **)qword_140019210 != &qword_140019208 )
LABEL_17:
      __fastfail(3u);
    *(_QWORD *)v5 = &qword_140019208;
    *(_QWORD *)(v5 + 8) = v9;
    *v9 = v5;
    qword_140019210 = v5;
  }
  *(_QWORD *)(a1 + 1080) = v5;
  ++*(_DWORD *)(v5 + 40);
  v10 = (_QWORD *)(a1 + 1088);
  v11 = *(_QWORD **)(v5 + 24);
  if ( *v11 != v5 + 16 )
    goto LABEL_17;
  *v10 = v5 + 16;
  *(_QWORD *)(a1 + 1096) = v11;
  *v11 = v10;
  *(_QWORD *)(v5 + 24) = v10;
  if ( !*(_DWORD *)(a1 + 80) )
    KeAddProcessorAffinityEx(v5 + 48, *(unsigned int *)(a1 + 56));
  v7 = *(_DWORD *)(v5 + 36) != *(_DWORD *)(v5 + 40) ? 0x103 : 0;
  InitializePhysicalCores(a1);
LABEL_16:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400191A8);
  return v7;
}
