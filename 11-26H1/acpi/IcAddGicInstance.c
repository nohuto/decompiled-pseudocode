/*
 * XREFs of IcAddGicInstance @ 0x1400BE980
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1400D7BD8 (AcpiIrqLibConfigureLibrary.c)
 *     IrqLibpParseMadt @ 0x1400DC8F4 (IrqLibpParseMadt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IcAddGicInstance(int a1)
{
  int v2; // ebx
  __int64 Pool2; // rax
  _DWORD *v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  int v7; // ebp
  __int64 v8; // rax
  int v9; // edx
  __int64 *v10; // rcx
  unsigned int v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF

  v13 = 0;
  v12 = 0;
  v2 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, unsigned int *))HalDispatchTable->HalQuerySystemInformation)(
         59LL,
         0LL,
         0LL,
         &v12);
  if ( v2 != -1073741820 )
    return (unsigned int)v2;
  if ( !v12 )
    return (unsigned int)-1073741820;
  Pool2 = ExAllocatePool2(256LL, v12, 1232102209LL);
  v4 = (_DWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v2 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, int *))HalDispatchTable->HalQuerySystemInformation)(
         59LL,
         v12,
         Pool2,
         &v13);
  if ( v2 < 0 )
    goto LABEL_16;
  if ( v12 != v13 )
  {
    v2 = -1073741820;
    goto LABEL_16;
  }
  v5 = 0LL;
  if ( !*v4 )
  {
LABEL_15:
    v2 = 0;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v6 = v4[2 * v5 + 2];
    if ( v6 )
      break;
LABEL_14:
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= *v4 )
      goto LABEL_15;
  }
  v7 = v6 - 1;
  v8 = ExAllocatePool2(256LL, (unsigned int)(200 * (v6 - 1) + 232), 1232102209LL);
  if ( v8 )
  {
    v9 = a1 + v4[2 * v5 + 1];
    *(_DWORD *)(v8 + 16) = v9;
    *(_DWORD *)(v8 + 20) = v9 + v7;
    v10 = (__int64 *)qword_14008F3D8;
    if ( *(__int64 **)qword_14008F3D8 != &IcListHead )
      __fastfail(3u);
    *(_QWORD *)v8 = &IcListHead;
    *(_QWORD *)(v8 + 8) = v10;
    *v10 = v8;
    qword_14008F3D8 = v8;
    goto LABEL_14;
  }
  v2 = -1073741670;
LABEL_16:
  ExFreePoolWithTag(v4, 0);
  return (unsigned int)v2;
}
