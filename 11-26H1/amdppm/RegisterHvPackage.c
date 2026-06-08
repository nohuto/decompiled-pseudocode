/*
 * XREFs of RegisterHvPackage @ 0x14003E080
 * Callers:
 *     <none>
 * Callees:
 *     GetHvProcessorInfo @ 0x14000DB24 (GetHvProcessorInfo.c)
 *     InitializeHvPhysicalCores @ 0x14000DB60 (InitializeHvPhysicalCores.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RegisterHvPackage(__int64 a1)
{
  unsigned int v2; // esi
  __int64 HvProcessorInfo; // rax
  int v4; // ebp
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 Pool2; // rax
  int v9; // edx
  _QWORD *v10; // rax
  __int64 v11; // r9
  _DWORD *v12; // r8
  bool v13; // zf
  int v14; // ecx
  __int64 *v15; // rax
  _QWORD *v16; // r8
  _QWORD *v17; // rcx

  v2 = -1073741823;
  HvProcessorInfo = GetHvProcessorInfo(*(_DWORD *)(a1 + 72));
  if ( HvProcessorInfo )
  {
    v4 = *(_DWORD *)(HvProcessorInfo + 8);
    v5 = *(_DWORD *)(HvProcessorInfo + 4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400155D8,
      0LL);
    v6 = qword_140015638;
    if ( (__int64 *)qword_140015638 == &qword_140015638 )
      goto LABEL_6;
    do
    {
      v7 = v6;
      if ( *(_DWORD *)(v6 + 32) == v4 )
        break;
      v6 = *(_QWORD *)v6;
      v7 = 0LL;
    }
    while ( (__int64 *)v6 != &qword_140015638 );
    if ( !v7 )
    {
LABEL_6:
      Pool2 = ExAllocatePool2(64LL, 616LL, 1919119952LL);
      v7 = Pool2;
      if ( !Pool2 )
      {
LABEL_18:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1400155D8);
        return v2;
      }
      *(_DWORD *)(Pool2 + 32) = v4;
      v9 = 0;
      v10 = (_QWORD *)(Pool2 + 16);
      v10[1] = v10;
      *v10 = v10;
      if ( dword_140015B88 )
      {
        v11 = (unsigned int)dword_140015B88;
        v12 = (_DWORD *)(qword_140015B80 + 8);
        do
        {
          v13 = v4 == *v12;
          v14 = v9 + 1;
          v12 += 3;
          if ( !v13 )
            v14 = v9;
          v9 = v14;
          --v11;
        }
        while ( v11 );
      }
      *(_DWORD *)(v7 + 36) = v9;
      KeInitializeAffinityEx2(v7 + 48, 32LL);
      KeInitializeAffinityEx2(v7 + 344, 32LL);
      v15 = (__int64 *)qword_140015640;
      if ( *(__int64 **)qword_140015640 != &qword_140015638 )
LABEL_20:
        __fastfail(3u);
      *(_QWORD *)(v7 + 8) = qword_140015640;
      *(_QWORD *)v7 = &qword_140015638;
      *v15 = v7;
      qword_140015640 = v7;
      *(_QWORD *)(v7 + 328) = v7 + 320;
      *(_QWORD *)(v7 + 320) = v7 + 320;
    }
    *(_QWORD *)(a1 + 1080) = v7;
    ++*(_DWORD *)(v7 + 40);
    if ( !*(_DWORD *)(a1 + 80) )
      KeAddProcessorAffinityEx(v7 + 48, *(unsigned int *)(a1 + 56));
    v16 = *(_QWORD **)(v7 + 24);
    v17 = (_QWORD *)(a1 + 1088);
    if ( *v16 == v7 + 16 )
    {
      *v17 = v7 + 16;
      *(_QWORD *)(a1 + 1096) = v16;
      *v16 = v17;
      *(_QWORD *)(v7 + 24) = v17;
      v2 = *(_DWORD *)(v7 + 36) != *(_DWORD *)(v7 + 40) ? 0x103 : 0;
      InitializeHvPhysicalCores(a1, v5);
      goto LABEL_18;
    }
    goto LABEL_20;
  }
  return v2;
}
