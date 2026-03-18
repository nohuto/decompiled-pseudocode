/*
 * XREFs of ?CompareMultiString@@YAEPEAGU_UNICODE_STRING@@@Z @ 0x14023AF40
 * Callers:
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x14023ABEC (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x14023B1F4 (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall CompareMultiString(char *a1, struct _UNICODE_STRING *a2)
{
  wchar_t *Buffer; // rdi
  unsigned __int64 Length; // r11
  unsigned int i; // r9d
  unsigned __int64 v6; // rax
  wchar_t *v7; // rcx
  __int64 v8; // rax
  char *v9; // r10
  int v10; // r8d
  int v11; // edx

  Buffer = a2->Buffer;
  Length = a2->Length;
  for ( i = 0; ; i += v8 + 1 )
  {
    v6 = 2LL * i;
    if ( v6 >= Length )
      break;
    v7 = &Buffer[v6 / 2];
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    if ( !(_DWORD)v8 )
      break;
    v9 = (char *)(a1 - (char *)v7);
    do
    {
      v10 = *(unsigned __int16 *)&v9[(_QWORD)v7];
      v11 = *v7 - v10;
      if ( v11 )
        break;
      ++v7;
    }
    while ( v10 );
    if ( !v11 )
      return 1;
  }
  return 0;
}
