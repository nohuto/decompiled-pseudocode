/*
 * XREFs of BcpGetCharacterMaxResourceProfile @ 0x14071C5B4
 * Callers:
 *     BcpGetMaxResourceProfile @ 0x14071C840 (BcpGetMaxResourceProfile.c)
 * Callees:
 *     RaspGetXExtent @ 0x14071DB24 (RaspGetXExtent.c)
 */

__int64 __fastcall BcpGetCharacterMaxResourceProfile(unsigned __int16 a1, int a2, __int128 *a3, unsigned __int64 *a4)
{
  __int128 v4; // xmm1
  unsigned __int64 *v6; // rdi
  __int64 v7; // rsi
  _DWORD *v8; // rbx
  unsigned __int64 v9; // rax
  unsigned int v10; // edx
  unsigned __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-40h]
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h]
  __int128 v16; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-8h]
  unsigned int v18; // [rsp+90h] [rbp+30h] BYREF

  v4 = *a3;
  v14 = 0LL;
  v6 = a4;
  v7 = 0LL;
  v8 = (_DWORD *)((char *)&unk_140E0F0A0 + 4 * a2);
  v15 = *((_QWORD *)a3 + 2);
  v14 = v4;
  do
  {
    LODWORD(v15) = *v8;
    v18 = 0;
    v17 = 0LL;
    v16 = 0LL;
    LODWORD(a4) = RaspGetXExtent(a1, (unsigned int)&v14, (unsigned int)&v18, (_DWORD)a4, v13, (__int64)&v16);
    if ( (int)a4 < 0 )
      break;
    v9 = *v6;
    v10 = v18;
    v11 = v17;
    if ( *((_DWORD *)v6 + 2) >= v18 )
      v10 = *((_DWORD *)v6 + 2);
    *((_DWORD *)v6 + 2) = v10;
    if ( v9 >= v11 )
      v11 = v9;
    ++v7;
    v8 += 21;
    *v6 = v11;
  }
  while ( v7 < 5 );
  return (unsigned int)a4;
}
