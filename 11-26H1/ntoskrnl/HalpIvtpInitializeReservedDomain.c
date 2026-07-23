/*
 * XREFs of HalpIvtpInitializeReservedDomain @ 0x140BF730C
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x140BF6684 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     IvtAllocateTranslationStructures @ 0x140503418 (IvtAllocateTranslationStructures.c)
 *     IvtUpdateTranslationStructures @ 0x14052B598 (IvtUpdateTranslationStructures.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpIvtpInitializeReservedDomain(__int64 a1, int *a2)
{
  _QWORD *v2; // rdi
  int TranslationStructures; // ebx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r8
  _DWORD v10[10]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v11; // [rsp+68h] [rbp-50h]
  int v12; // [rsp+70h] [rbp-48h]

  v2 = (_QWORD *)*((_QWORD *)a2 + 1);
  if ( *(_DWORD *)*v2 == 1 )
  {
    if ( *(unsigned __int16 *)(*v2 + 8LL) == *(_DWORD *)(a1 + 252) )
    {
      memset_0(v10, 0, 0x70uLL);
      v12 = *a2;
      v6 = v2[2];
      v7 = v2[3];
      v10[0] = 1;
      v10[1] = 2;
      v11 = v6;
      TranslationStructures = IvtAllocateTranslationStructures(a1, v7, v10);
      if ( TranslationStructures >= 0 )
      {
        if ( *(_BYTE *)(a1 + 320) )
        {
          *(_QWORD *)(v7 + 80) = *(_QWORD *)(v7 + 88);
          *(_QWORD *)(v7 + 88) = 0LL;
        }
        IvtUpdateTranslationStructures(a1, v7, v8, 4LL, (__int64)v10, 1, 0x10000LL);
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)TranslationStructures;
}
