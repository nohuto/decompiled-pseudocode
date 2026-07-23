/*
 * XREFs of AslpFileHasActiveMarkWrapper @ 0x140894A24
 * Callers:
 *     AslpFileGetExeWrapper @ 0x140892FA0 (AslpFileGetExeWrapper.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 */

__int64 __fastcall AslpFileHasActiveMarkWrapper(_DWORD *a1, unsigned __int64 a2, __int64 a3)
{
  char *v6; // rdi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  __int16 UShortFromUser; // ax
  char *v10; // rbx
  char *v11; // rax
  unsigned int v12; // ebx
  char *i; // rdx

  *a1 = 0;
  v6 = 0LL;
  v7 = *(_QWORD *)(a3 + 40);
  v8 = 4294966270LL;
  if ( v7 - 1025 > 0xFFFFFBFE || *(_DWORD *)(a3 + 84) || *(_DWORD *)(a3 + 80) )
  {
    v12 = -1073741275;
  }
  else
  {
    if ( MmIsUserAddress(a2) )
    {
      UShortFromUser = RtlReadUShortFromUser((unsigned __int16 *)(a2 + 24));
      v8 = 267LL;
      if ( UShortFromUser != 267 )
        goto LABEL_22;
    }
    else
    {
      v8 = 267LL;
      if ( *(_WORD *)(a2 + 24) != 267 )
      {
LABEL_22:
        v12 = -1073741275;
        goto LABEL_24;
      }
    }
    if ( a2 == -152LL )
      goto LABEL_22;
    v8 = (unsigned int)(*(_DWORD *)(a2 + 156) + 1024);
    if ( v7 <= v8 )
      goto LABEL_22;
    v10 = (char *)(v7 + *(_QWORD *)(a3 + 32) - v8);
    if ( MmIsUserAddress((unsigned __int64)v10) )
    {
      v11 = (char *)AslAlloc(v8, 1024LL);
      v6 = v11;
      if ( !v11 )
      {
        v12 = -1073741801;
        goto LABEL_24;
      }
      RtlCopyFromUser(v11, v10, 0x400uLL);
      v10 = v6;
    }
    for ( i = v10 + 998; i >= v10; --i )
    {
      if ( *(_QWORD *)i == 0x464F564D41534D54LL && *((_WORD *)i + 4) == 1 )
      {
        v8 = *(unsigned int *)(i + 10) + 622LL + *(unsigned int *)(i + 14) + (unsigned __int64)*(unsigned int *)(i + 18);
        if ( v8 == *(_DWORD *)(i + 22) )
        {
          *a1 = 1;
          break;
        }
      }
    }
    v12 = 0;
  }
LABEL_24:
  if ( v6 )
    AslFree(v8, v6);
  return v12;
}
