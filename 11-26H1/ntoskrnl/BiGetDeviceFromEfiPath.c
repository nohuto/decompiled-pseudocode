/*
 * XREFs of BiGetDeviceFromEfiPath @ 0x1409D1444
 * Callers:
 *     BiUpdateBcdObject @ 0x1409D0B64 (BiUpdateBcdObject.c)
 *     BiCreateMergedBootEntry @ 0x1409D10B0 (BiCreateMergedBootEntry.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     BiTranslateFilePath @ 0x1409D1C64 (BiTranslateFilePath.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetDeviceFromEfiPath(char *Src, _QWORD *a2, _DWORD *a3)
{
  char *v3; // rdi
  char v4; // al
  _DWORD *v5; // r14
  char *v6; // rsi
  char *i; // rbx
  unsigned int v10; // ebx
  char *Pool2; // rax
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v15; // ebp
  _DWORD *v16; // rax
  _QWORD *v17; // rax
  PVOID P; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v19; // [rsp+68h] [rbp+10h]

  v19 = a2;
  v3 = 0LL;
  v4 = *Src & 0x7F;
  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  if ( v4 == 127 )
  {
    v13 = -1073741766;
  }
  else
  {
    for ( i = &Src[*((unsigned __int16 *)Src + 1)];
          (*i & 0x7F) != 0x7F && (*i != 4 || i[1] != 4);
          i += *((unsigned __int16 *)i + 1) )
    {
      ;
    }
    v10 = (_DWORD)i - (_DWORD)Src;
    Pool2 = (char *)ExAllocatePool2(0x102uLL);
    v6 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1;
      *((_DWORD *)Pool2 + 1) = v10 + 16;
      *((_DWORD *)Pool2 + 2) = 4;
      memmove(Pool2 + 12, Src, v10);
      *(_DWORD *)&v6[v10 + 12] = 327551;
      v12 = BiTranslateFilePath(v6, 3LL, &P);
      v3 = (char *)P;
      v13 = v12;
      if ( v12 < 0 )
      {
        if ( v12 == -1073741811 )
          goto LABEL_7;
        goto LABEL_13;
      }
      v15 = *((_DWORD *)P + 1) - 12;
      v16 = (_DWORD *)ExAllocatePool2(0x102uLL);
      v5 = v16;
      if ( v16 )
      {
        memset_0(v16, 0, v15 + 20);
        *v5 = 2;
        memmove(v5 + 5, v3 + 12, v15);
        v17 = v19;
        *a3 = v15 + 20;
        *v17 = v5;
        goto LABEL_7;
      }
    }
    v13 = -1073741670;
  }
LABEL_13:
  BiLogMessage(4LL, L"BiGetDeviceFromEfiPath failed: %x", v13);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
LABEL_7:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  return v13;
}
