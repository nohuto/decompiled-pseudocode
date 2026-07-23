/*
 * XREFs of KiAllocateKNode @ 0x1405F19B8
 * Callers:
 *     KiPopulateNodeInformation @ 0x140CD0B2C (KiPopulateNodeInformation.c)
 * Callees:
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall KiAllocateKNode(unsigned __int16 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  unsigned int i; // r11d
  unsigned __int8 j; // r10
  __int64 v15; // rdi
  int v16; // ebp
  __int64 v17; // r8
  char v18; // dl
  __int128 v20; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  v20 = 0LL;
  LOBYTE(v20) = 3;
  *(_QWORD *)&v20 = v20 | 0x100;
  v6 = 0LL;
  DWORD2(v20) = a1;
  v7 = ExAllocatePool3(72LL, 16 * a2 + 8 * (a2 + 16LL), 1867409739LL, &v20, 1);
  v8 = v7;
  if ( v7 )
  {
    v6 = v7;
    v9 = v7 + 128;
    v10 = v9 + 8 * v4;
    if ( a3 )
    {
      v11 = 0LL;
      *(_OWORD *)v6 = *(_OWORD *)a3;
      *(_OWORD *)(v6 + 16) = *(_OWORD *)(a3 + 16);
      *(_OWORD *)(v6 + 32) = *(_OWORD *)(a3 + 32);
      *(_OWORD *)(v6 + 48) = *(_OWORD *)(a3 + 48);
      *(_OWORD *)(v6 + 64) = *(_OWORD *)(a3 + 64);
      *(_QWORD *)(v6 + 32) = v9;
      *(_DWORD *)(v6 + 40) = v4;
      *(_QWORD *)(v6 + 80) = v10;
      v12 = *(_DWORD *)(a3 + 44);
      if ( v12 )
      {
        do
        {
          *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v11) = *(_QWORD *)(*(_QWORD *)(a3 + 32) + 8 * v11);
          v11 = (unsigned int)(v11 + 1);
          v12 = *(_DWORD *)(a3 + 44);
        }
        while ( (unsigned int)v11 < v12 );
      }
      for ( i = 0; i < 2; ++i )
      {
        for ( j = 0; j < 8u; ++j )
        {
          v15 = 0LL;
          if ( v12 )
          {
            v16 = j + 8 * i;
            do
            {
              v17 = (unsigned int)v15;
              v18 = *(_BYTE *)(*(_QWORD *)(a3 + 80) + (unsigned int)(*(_DWORD *)(a3 + 40) * v16) + v15);
              v15 = (unsigned int)(v15 + 1);
              *(_BYTE *)(v17 + (unsigned int)(*(_DWORD *)(v8 + 40) * v16) + *(_QWORD *)(v8 + 80)) = v18;
              v12 = *(_DWORD *)(a3 + 44);
            }
            while ( (unsigned int)v15 < v12 );
          }
        }
      }
    }
    else
    {
      *(_WORD *)v8 = a1;
      *(_QWORD *)(v8 + 32) = v9;
      *(_DWORD *)(v8 + 40) = v4;
      *(_QWORD *)(v8 + 80) = v10;
    }
  }
  return v6;
}
