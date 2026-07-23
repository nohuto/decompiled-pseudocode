/*
 * XREFs of sub_14052C5D0 @ 0x14052C5D0
 * Callers:
 *     sub_1409ED0E8 @ 0x1409ED0E8 (sub_1409ED0E8.c)
 *     sub_140AAE6E4 @ 0x140AAE6E4 (sub_140AAE6E4.c)
 * Callees:
 *     sub_14041B4D0 @ 0x14041B4D0 (sub_14041B4D0.c)
 *     Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline @ 0x1404FA178 (Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 */

void __fastcall sub_14052C5D0(__int64 a1, char *a2, _BYTE *a3, unsigned int a4, __int64 a5, unsigned int a6, char *a7)
{
  _BYTE *v8; // rbp
  char *v11; // rbx
  char UCharFromUser; // al
  int v13; // r13d
  size_t v14; // rbx
  int v15; // r15d
  int v16; // esi
  unsigned int v17; // ebx
  unsigned int v18; // esi
  unsigned int v19; // ebp
  unsigned int v20; // ebx
  unsigned int v21; // esi
  unsigned int v22; // ebp
  unsigned int v23; // ebx
  unsigned int v24; // esi
  unsigned int v25; // ebp
  int v26; // ebx
  int v27; // ecx
  unsigned int v28; // r14d
  size_t v29; // rax
  __int64 v30; // rcx
  char *v31; // r12
  __int64 v32; // r14
  __int64 v33; // rbx
  unsigned int v34; // r15d
  unsigned int v35; // r13d
  unsigned int v36; // ebp
  unsigned int v37; // r14d
  unsigned int v38; // r15d
  unsigned int v39; // ebp
  unsigned int v40; // r14d
  unsigned int v41; // r15d
  unsigned int v42; // ebp
  unsigned int v43; // r13d
  int v44; // r15d
  size_t v45; // rax
  bool v46; // zf
  __int64 Src; // [rsp+20h] [rbp-58h] BYREF
  __int64 v48; // [rsp+28h] [rbp-50h] BYREF
  size_t Size; // [rsp+30h] [rbp-48h]

  if ( a4 )
  {
    v8 = a3;
    v11 = &a2[a4 - 1];
    if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
      UCharFromUser = RtlReadUCharFromUser(v11);
    else
      UCharFromUser = *v11;
    v13 = a6;
    v14 = a4 & 7;
    v15 = ~a6;
    Size = v14;
    *a7 = UCharFromUser;
    if ( (a4 & 7) != 0 )
    {
      v17 = v15 ^ sub_14041B4D0(a1, 9u, a5, a6);
      v18 = a6 ^ sub_14041B4D0(a1, 8u, a5, v17);
      v19 = v17 ^ sub_14041B4D0(a1, 7u, a5, v18);
      v20 = v18 ^ sub_14041B4D0(a1, 6u, a5, v19);
      v21 = v19 ^ sub_14041B4D0(a1, 5u, a5, v20);
      v22 = v20 ^ sub_14041B4D0(a1, 4u, a5, v21);
      v23 = v21 ^ sub_14041B4D0(a1, 3u, a5, v22);
      v24 = v22 ^ sub_14041B4D0(a1, 2u, a5, v23);
      v25 = v23 ^ sub_14041B4D0(a1, 1u, a5, v24);
      v48 = 0LL;
      v26 = v24 ^ sub_14041B4D0(a1, 0, a5, v25);
      memmove(&v48, a2, Size);
      v16 = v48;
      LODWORD(Src) = v48 ^ v25;
      v27 = v26 ^ HIDWORD(v48);
      v14 = Size;
      HIDWORD(Src) = v27;
      memset_0((char *)&Src + Size, 0, (unsigned int)(8 - Size));
      v8 = a3;
      memmove(a3, &Src, v14);
      v13 = HIDWORD(Src);
      v15 = Src;
    }
    else
    {
      v16 = 0;
      v48 = 0LL;
    }
    v28 = a4 >> 3;
    v29 = (size_t)&v8[v14];
    Size = (size_t)&v8[v14];
    if ( v28 )
    {
      v30 = v28;
      v31 = (char *)(a2 - v8);
      v32 = a1;
      Src = v30;
      do
      {
        v33 = *(_QWORD *)&v31[v29];
        v34 = v33 ^ v15;
        v35 = HIDWORD(v33) ^ sub_14041B4D0(v32, 0, a5, v34) ^ v13;
        v36 = v34 ^ sub_14041B4D0(v32, 1u, a5, v35);
        v37 = v35 ^ sub_14041B4D0(v32, 2u, a5, v36);
        v38 = v36 ^ sub_14041B4D0(a1, 3u, a5, v37);
        v39 = v37 ^ sub_14041B4D0(a1, 4u, a5, v38);
        v40 = v38 ^ sub_14041B4D0(a1, 5u, a5, v39);
        v41 = v39 ^ sub_14041B4D0(a1, 6u, a5, v40);
        v42 = v40 ^ sub_14041B4D0(a1, 7u, a5, v41);
        v32 = a1;
        v43 = v41 ^ sub_14041B4D0(a1, 8u, a5, v42);
        v44 = sub_14041B4D0(a1, 9u, a5, v43);
        v45 = Size;
        v15 = v16 ^ v42 ^ v44;
        v16 = v33;
        v13 = HIDWORD(v48) ^ v43;
        v48 = v33;
        *(_DWORD *)Size = v15;
        *(_DWORD *)(v45 + 4) = v13;
        v29 = v45 + 8;
        v46 = Src-- == 1;
        Size = v29;
      }
      while ( !v46 );
    }
  }
}
