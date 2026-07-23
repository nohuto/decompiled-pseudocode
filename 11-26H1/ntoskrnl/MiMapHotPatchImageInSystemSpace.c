/*
 * XREFs of MiMapHotPatchImageInSystemSpace @ 0x1408791D8
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x14087994C (MiPrepareToHotPatchImage.c)
 * Callees:
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 */

__int64 __fastcall MiMapHotPatchImageInSystemSpace(_QWORD *a1)
{
  unsigned int v2; // ebx
  void *v3; // rcx
  __int64 v4; // rbp
  PMDL Mdl; // rax
  struct _MDL *v6; // rsi
  struct _MDL *v7; // r14
  unsigned __int64 v8; // r8
  struct _MDL *v9; // rdx
  unsigned __int64 v10; // r9
  __int64 *i; // rcx
  unsigned int v12; // eax
  __int64 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (void *)a1[1];
  v18 = 0;
  v4 = (a1[2] - (_QWORD)v3) >> 12;
  Mdl = IoAllocateMdl(v3, (_DWORD)v4 << 12, 0, 0, 0LL);
  v6 = Mdl;
  if ( Mdl )
  {
    v7 = Mdl + 1;
    v8 = (unsigned int)v4;
    v9 = Mdl + 1;
    v10 = (unsigned __int64)&Mdl[1] + 8 * (unsigned int)v4;
    if ( (unsigned __int64)&Mdl[1] > v10 )
      v8 = 0LL;
    if ( v8 >= 2 && (v7 > (struct _MDL *)&qword_140E36178 || (char *)v7 + 8 * v8 - 8 < (char *)&qword_140E36178) )
    {
      v8 = 8 * (v8 & 0xFFFFFFFFFFFFFFFEuLL);
      memset64(v9, qword_140E36178, v8 >> 3);
      v9 = (struct _MDL *)((char *)v9 + v8);
    }
    while ( (unsigned __int64)v9 < v10 )
    {
      v9->Next = (struct _MDL *)qword_140E36178;
      v9 = (struct _MDL *)((char *)v9 + 8);
    }
    for ( i = (__int64 *)a1[7]; i; i = (__int64 *)*i )
    {
      v12 = *((_DWORD *)i + 10) >> 12;
      v8 = (unsigned __int64)&v6[1] + 8 * ((i[4] + (unsigned __int64)*((unsigned int *)i + 11) - a1[1]) >> 12);
      if ( v12 )
      {
        v13 = i + 6;
        v14 = v12;
        do
        {
          v15 = *v13++;
          *(_QWORD *)v8 = v15;
          v8 += 8LL;
          --v14;
        }
        while ( v14 );
      }
    }
    v16 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, v4, v8, v10);
    if ( v16 )
    {
      MiFillSystemPtes((_QWORD *)v16, (unsigned int)v4, (__int64)v7, 4u, 2, &v18);
      v6->MdlFlags |= 1u;
      v6->MappedSystemVa = (PVOID)((__int64)(v16 << 25) >> 16);
      a1[8] = v6;
    }
    else
    {
      v2 = -1073741670;
      IoFreeMdl(v6);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
