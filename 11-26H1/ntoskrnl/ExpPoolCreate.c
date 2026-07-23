/*
 * XREFs of ExpPoolCreate @ 0x140780790
 * Callers:
 *     ExCreatePoolInternal @ 0x140780744 (ExCreatePoolInternal.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x1403542D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x140354540 (RtlpHpMetadataFree.c)
 *     RtlHpEnvContextCreate @ 0x14041CB90 (RtlHpEnvContextCreate.c)
 *     RtlUnicodeStringCopy @ 0x14042FE80 (RtlUnicodeStringCopy.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExpPoolHeapCreate @ 0x14084C84C (ExpPoolHeapCreate.c)
 *     ExpPoolHeapDestroy @ 0x14084C92C (ExpPoolHeapDestroy.c)
 *     ExpPoolMgrRegisterPool @ 0x14084D700 (ExpPoolMgrRegisterPool.c)
 */

__int64 __fastcall ExpPoolCreate(unsigned int a1, __int64 a2, __int64 a3, const UNICODE_STRING *a4, __int64 *a5)
{
  unsigned int v7; // r15d
  NTSTATUS v8; // edi
  int v9; // r14d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r12
  __int128 v12; // xmm6
  void *v13; // rax
  __int64 v14; // rbx
  unsigned __int16 Length; // ax
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // rdx
  unsigned int i; // esi
  __int64 v24; // [rsp+30h] [rbp-58h] BYREF
  __int128 v25; // [rsp+40h] [rbp-48h] BYREF

  v24 = 0LL;
  v7 = 0;
  v8 = -1073741811;
  if ( a1 < 2 && (a2 & 0xFFFFFFEF) == 0 && a4->Length && a4->Length <= 0x80u )
  {
    v9 = (unsigned __int16)KeNumberNodes;
    if ( (a2 & 0x10) == 0 )
      v9 = 1;
    v10 = (16LL * (unsigned __int16)KeNumberNodes + 81) & 0xFFFFFFFFFFFFFFFEuLL;
    v11 = v10 + a4->Length;
    v12 = *(_OWORD *)RtlHpEnvContextCreate((__int64)&v25, a2, a1, 0, 0);
    v25 = v12;
    v13 = (void *)RtlpHpMetadataAlloc(v11, v11, 0, &v25);
    v14 = (__int64)v13;
    if ( v13 )
    {
      memset_0(v13, 0, v11);
      *(_DWORD *)v14 = -1347437123;
      if ( (dword_140E6BF60 & 1) == 0 )
      {
        *(_DWORD *)(v14 + 4) |= 1u;
        v7 = 0x400000;
      }
      *(_OWORD *)(v14 + 8) = v12;
      *(_QWORD *)(v14 + 24) = 0LL;
      *(_QWORD *)(v14 + 64) = (-(__int64)(a1 != 0) & 0xFFFFFFFFFFFFFF40uLL) + 1803;
      Length = a4->Length;
      *(_OWORD *)(v14 + 48) = 0LL;
      *(_WORD *)(v14 + 50) = Length;
      *(_QWORD *)(v14 + 56) = v10 + v14;
      v8 = RtlUnicodeStringCopy((PUNICODE_STRING)(v14 + 48), a4);
      if ( v8 < 0 )
        goto LABEL_21;
      *(_DWORD *)(v14 + 72) = v9;
      v16 = 0;
      while ( 1 )
      {
        v17 = *(unsigned int *)(v14 + 72);
        if ( v16 >= (unsigned int)v17 )
          break;
        v8 = ExpPoolHeapCreate(a1, v7, v16, &v24);
        if ( v8 < 0 )
          goto LABEL_21;
        v18 = v16++ + 5LL;
        *(_QWORD *)(v14 + 16 * v18) = v24;
      }
      v19 = *(_QWORD *)(v14 + 80);
      if ( (unsigned int)v17 < (unsigned __int16)KeNumberNodes )
      {
        v20 = (_QWORD *)(v14 + 16 * (v17 + 5));
        v21 = (unsigned __int16)KeNumberNodes - (unsigned int)v17;
        do
        {
          *v20 = v19;
          v20 += 2;
          --v21;
        }
        while ( v21 );
      }
      v8 = ExpPoolMgrRegisterPool(&dword_140E6BF60, v14, v19);
      if ( v8 < 0 )
      {
LABEL_21:
        for ( i = 0; i < *(_DWORD *)(v14 + 72); ++i )
        {
          if ( *(_QWORD *)(v14 + 16 * (i + 5LL)) )
            ExpPoolHeapDestroy();
        }
        v25 = v12;
        RtlpHpMetadataFree(v14, &v25);
      }
      else
      {
        *a5 = v14;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v8;
}
