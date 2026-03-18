/*
 * XREFs of BiCreateBootEntry @ 0x140893864
 * Callers:
 *     BiCreateEfiEntry @ 0x140893C10 (BiCreateEfiEntry.c)
 * Callees:
 *     swprintf_s @ 0x14053B0E0 (swprintf_s.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     BiTranslateFilePath @ 0x1409D1C64 (BiTranslateFilePath.c)
 *     BiGetKeyName @ 0x1409D3FE4 (BiGetKeyName.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BiGetElement @ 0x1409D4A9C (BiGetElement.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreateBootEntry(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // rdi
  void *v3; // rsi
  unsigned int *v4; // r14
  void *v5; // r15
  char *v6; // r12
  int Element; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ebx
  char *Pool2; // rax
  __int64 v20; // rbx
  size_t v21; // r8
  int KeyName; // eax
  int v23; // r8d
  unsigned int v24; // ecx
  _DWORD *v25; // rax
  _DWORD *v26; // rbx
  int v27; // ecx
  size_t v28; // r8
  PVOID v29; // rdx
  int v30; // eax
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  size_t v35; // [rsp+30h] [rbp-38h] BYREF
  void *v36; // [rsp+38h] [rbp-30h] BYREF
  void *Src; // [rsp+40h] [rbp-28h] BYREF
  _DWORD *v38; // [rsp+48h] [rbp-20h] BYREF
  void *v39; // [rsp+50h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-10h] BYREF
  size_t v43; // [rsp+C0h] [rbp+58h] BYREF
  size_t Size; // [rsp+C8h] [rbp+60h] BYREF

  LODWORD(v43) = 0;
  LODWORD(Size) = 0;
  LODWORD(v35) = 0;
  v2 = 0LL;
  P[0] = 0LL;
  v3 = 0LL;
  v38 = 0LL;
  v4 = 0LL;
  Src = 0LL;
  v5 = 0LL;
  v36 = 0LL;
  v6 = 0LL;
  v39 = 0LL;
  Element = BiGetElement(a1, 301989892LL, P, &v43);
  v9 = Element;
  if ( Element < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application description. Status: %x",
      (unsigned int)Element);
    goto LABEL_25;
  }
  v10 = BiGetElement(a1, 285212673LL, &v38, &Size);
  v9 = v10;
  if ( v10 < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application device. Status: %x",
      (unsigned int)v10);
    v2 = v38;
    goto LABEL_25;
  }
  v11 = BiGetElement(a1, 301989890LL, &Src, &v35);
  v9 = v11;
  if ( v11 < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application path. Status: %x",
      (unsigned int)v11);
    v2 = v38;
    v3 = Src;
    goto LABEL_25;
  }
  v2 = v38;
  v3 = Src;
  if ( *v38 != 2 )
  {
    v9 = -1073741637;
    goto LABEL_25;
  }
  v12 = -1LL;
  v13 = -1LL;
  do
    ++v13;
  while ( *((_WORD *)Src + v13) );
  v14 = 2 * v13 + 2;
  v15 = -1LL;
  LODWORD(v35) = v14;
  do
    ++v15;
  while ( *((_WORD *)v38 + v15 + 10) );
  v16 = 2 * v15 + 2;
  v17 = v16 + v14;
  LODWORD(Size) = v16;
  if ( v16 + v14 < v16 )
    goto LABEL_24;
  v18 = v17 + 12;
  if ( v17 + 12 < v17 )
    goto LABEL_24;
  Pool2 = (char *)ExAllocatePool2(0x102uLL);
  v6 = Pool2;
  if ( !Pool2 )
  {
LABEL_16:
    v9 = -1073741670;
    goto LABEL_25;
  }
  *((_DWORD *)Pool2 + 1) = v18;
  v20 = (unsigned int)Size;
  v21 = (unsigned int)Size;
  *(_DWORD *)Pool2 = 1;
  *((_DWORD *)Pool2 + 2) = 3;
  memmove(Pool2 + 12, v2 + 5, v21);
  memmove(&v6[v20 + 12], v3, (unsigned int)v35);
  v9 = BiTranslateFilePath(v6, 4LL, &v36);
  if ( v9 < 0 || (KeyName = BiGetKeyName(a1, &v39), v5 = v39, v9 = KeyName, KeyName < 0) )
  {
    v4 = (unsigned int *)v36;
    goto LABEL_25;
  }
  do
    ++v12;
  while ( *((_WORD *)v39 + v12) );
  v4 = (unsigned int *)v36;
  LODWORD(v38) = (2 * v12 + 45) & 0xFFFFFFFC;
  LODWORD(v35) = (_DWORD)v38 + 16;
  v23 = *((_DWORD *)v36 + 1);
  v24 = ((_DWORD)v38 + 47) & 0xFFFFFFFC;
  LODWORD(Src) = v24;
  if ( (unsigned int)v43 + v24 + v23 + 4 < (unsigned int)v43 )
  {
LABEL_24:
    v9 = -1073741675;
  }
  else
  {
    LODWORD(Size) = (v24 + v43 + 3) & 0xFFFFFFFC;
    LODWORD(v36) = v23 + Size;
    v25 = (_DWORD *)ExAllocatePool2(0x102uLL);
    v26 = v25;
    if ( !v25 )
      goto LABEL_16;
    v27 = Size;
    v28 = (unsigned int)v43;
    v29 = P[0];
    *v25 = 1;
    v30 = (int)v36;
    v26[5] = v27;
    v31 = v35;
    v26[1] = v30;
    v32 = (unsigned int)Src;
    v26[6] = v31;
    v26[2] = -1;
    v26[3] = 5;
    v26[4] = v32;
    memmove((char *)v26 + v32, v29, v28);
    memmove((char *)v26 + (unsigned int)Size, v4, v4[1]);
    *(_QWORD *)(v26 + 7) = 0x53574F444E4957LL;
    v26[10] = v35;
    v26[11] = (_DWORD)v38;
    v26[9] = 1;
    swprintf_s((wchar_t *)v26 + 24, (unsigned int)v12 + 11LL, L"%s%s", L"BCDOBJECT=", v5);
    v33 = (unsigned int)v26[11];
    *(_DWORD *)((char *)v26 + v33 + 28) = 1;
    *(_DWORD *)((char *)v26 + v33 + 32) = 16;
    *(_DWORD *)((char *)v26 + v33 + 36) = 4;
    *(_DWORD *)((char *)v26 + v33 + 40) = 327551;
    *a2 = v26;
    v9 = 0;
  }
LABEL_25:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  return (unsigned int)v9;
}
