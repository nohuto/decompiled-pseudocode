/*
 * XREFs of sub_1400C1594 @ 0x1400C1594
 * Callers:
 *     sub_1400C1830 @ 0x1400C1830 (sub_1400C1830.c)
 *     sub_140188EAC @ 0x140188EAC (sub_140188EAC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400C14AC @ 0x1400C14AC (sub_1400C14AC.c)
 *     sub_1400C2598 @ 0x1400C2598 (sub_1400C2598.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

void __fastcall sub_1400C1594(__int64 a1, int a2, char a3, unsigned int a4, unsigned __int16 *a5)
{
  __int64 v6; // r14
  __int64 v7; // rax
  int v8; // ebx
  unsigned int v9; // ebx
  unsigned __int16 *v10; // rdi
  void *v11; // r15
  __int64 v12; // r12
  unsigned __int16 *v13; // rbx
  unsigned __int16 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // r11
  int v19; // r9d
  unsigned int v20; // eax
  __int64 i; // rdx
  unsigned __int64 v22; // rcx
  int v23; // [rsp+68h] [rbp-31h]
  _DWORD Dst[15]; // [rsp+78h] [rbp-21h] BYREF
  int v25; // [rsp+B4h] [rbp+1Bh]

  v6 = a4;
  memset_0(Dst, 0, 0x40uLL);
  v7 = *(_QWORD *)(a1 + 6152);
  if ( v7 )
    v8 = *(unsigned __int16 *)(v7 + 8) - 1;
  else
    v8 = 255;
  v9 = (v8 << 8) + 8;
  v10 = (unsigned __int16 *)sub_1400143E0(64LL, v9, 1179476306LL, *(_QWORD *)(a1 + 8));
  if ( v10 )
  {
    LOBYTE(v25) = 2;
    v25 |= 0xFFFF00u;
    Dst[10] = v9 >> 2;
    Dst[0] = 210;
    v23 = sub_140187D84(a1, (_DWORD)v10, 0, v9, (__int64)Dst);
    v11 = (void *)sub_1400143E0(64LL, 0x2000LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    if ( v11 )
    {
      if ( (_DWORD)v6 )
      {
        v12 = v6;
        v13 = a5;
        do
        {
          v14 = *v13;
          if ( (unsigned __int16)(*v13 - 1) <= 0xFFFDu )
          {
            memset_0(Dst, 0, 0x40uLL);
            sub_1400C14AC((__int64)Dst, v14, 209, (a3 & 2) != 0, a3 & 1, 0x2000u);
            v15 = 0LL;
            if ( (int)sub_140187D84(a1, (_DWORD)v11, 0, 0x2000, (__int64)Dst) >= 0 )
            {
              v16 = 0LL;
              v17 = 0LL;
              v18 = 0LL;
              v19 = 1;
              if ( v23 >= 0 )
              {
                v20 = *v10;
                for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                {
                  v19 = 1;
                  if ( (unsigned int)i >= v20 )
                    break;
                  v22 = (unsigned __int64)(unsigned int)i << 8;
                  if ( *(unsigned __int16 *)((char *)v10 + v22 + 8) == a5[i] )
                  {
                    v16 = *(_QWORD *)((char *)v10 + v22 + 80);
                    v19 = 0;
                    v17 = *(_QWORD *)((char *)v10 + v22 + 88);
                    v18 = *(_QWORD *)((char *)v10 + v22 + 96);
                    v15 = *(_QWORD *)((char *)v10 + v22 + 104);
                    break;
                  }
                  v20 = *v10;
                }
              }
              sub_1400C2598(a1, *v13, a2, v19, (__int64)v11, v16, v17, v18, v15);
            }
          }
          ++v13;
          --v12;
        }
        while ( v12 );
      }
      ExFreePoolWithTag(v11, 0x464D6152u);
    }
    ExFreePoolWithTag(v10, 0x464D6152u);
  }
}
