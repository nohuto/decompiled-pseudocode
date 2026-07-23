/*
 * XREFs of IopLiveDumpValidateParameters @ 0x1405D55AC
 * Callers:
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 * Callees:
 *     IopLiveDumpValidateDumpFileHandle @ 0x1405D5548 (IopLiveDumpValidateDumpFileHandle.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall IopLiveDumpValidateParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  NTSTATUS result; // eax
  unsigned int v6; // ecx
  __int64 v7; // rbp
  _OWORD *Pool2; // rax
  __int64 i; // rax
  unsigned int v10; // eax
  __int64 v11; // r8
  POBJECT_TYPE *v12; // rax
  bool v13; // zf

  v2 = 0LL;
  if ( !a2 )
    return -1073741811;
  if ( *(_DWORD *)a2 != 2 )
    return -1073741811;
  if ( *(_DWORD *)(a2 + 4) < 0x38u )
    return -1073741811;
  v6 = *(_DWORD *)(a2 + 28);
  if ( v6 >= 4 )
    return -1073741811;
  if ( (*(_DWORD *)(a2 + 24) & 0x20) == 0 )
    goto LABEL_15;
  v7 = *(_QWORD *)(a2 + 48);
  if ( !v7 || *(_DWORD *)v7 != 1 || *(_DWORD *)(v7 + 4) != 48 || *(_QWORD *)(v7 + 8) >= 2uLL || v6 )
    return -1073741811;
  Pool2 = (_OWORD *)ExAllocatePool2(0x40uLL);
  *(_QWORD *)(a1 + 1168) = Pool2;
  if ( !Pool2 )
    return -1073741801;
  *Pool2 = *(_OWORD *)v7;
  Pool2[1] = *(_OWORD *)(v7 + 16);
  Pool2[2] = *(_OWORD *)(v7 + 32);
LABEL_15:
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(a2 + 36) || *(_DWORD *)(a2 + 32) )
    return -1073741811;
  for ( i = *(_QWORD *)(a2 + 40); i; i = *(_QWORD *)(i + 32) )
  {
    if ( *(_DWORD *)(i + 28) || !*(_QWORD *)(i + 16) || !*(_DWORD *)(i + 24) )
      return -1073741811;
  }
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 32);
  v10 = *(_DWORD *)(a2 + 24);
  if ( v10 >= 0x40 )
    return -1073741811;
  if ( (v10 & 3) != 0 )
    return -1073741822;
  *(_DWORD *)(a1 + 40) = v10;
  if ( (v10 & 8) == 0 )
  {
    result = IopLiveDumpValidateDumpFileHandle(*(void **)(a2 + 8));
    if ( result < 0 )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      return result;
    }
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 8);
  }
  v11 = *(_QWORD *)(a2 + 16);
  if ( !v11
    || (v12 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v11 - 48) >> 8)],
        v12 == ExEventObjectType)
    || v12 == PsProcessType
    || v12 == PsThreadType
    || (v13 = v12 == (POBJECT_TYPE *)ExTimerObjectType, result = -1073741811, v13) )
  {
    result = 0;
  }
  if ( result >= 0 )
    v2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 72) = v2;
  return result;
}
