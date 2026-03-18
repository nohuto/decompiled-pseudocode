/*
 * XREFs of sub_14001D940 @ 0x14001D940
 * Callers:
 *     sub_14001DF50 @ 0x14001DF50 (sub_14001DF50.c)
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_14001D628 @ 0x14001D628 (sub_14001D628.c)
 *     _guard_dispatch_icall @ 0x1400327C0 (_guard_dispatch_icall.c)
 */

__int16 __fastcall sub_14001D940(__int64 a1, __int64 a2, unsigned int a3, int a4, char a5, char a6, char a7)
{
  _UNKNOWN **v7; // rax
  int v8; // r10d
  unsigned int v12; // r15d
  __int64 v13; // r14
  signed __int32 v14; // ecx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdi
  signed __int64 v18; // rax
  signed __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rax
  void (__fastcall *v22)(__int64, __int64, _QWORD); // rax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  v7 = &retaddr;
  v8 = a4;
  v12 = 0;
  if ( a3 )
  {
    v13 = 0LL;
    do
    {
      v14 = *(_DWORD *)(v13 + *(_QWORD *)(a2 + 32));
      if ( (v14 & 8) != 0 )
      {
        do
        {
          if ( a6 && (v14 & 0x10) != 0 )
            break;
          if ( a5 != 1 )
          {
            LOWORD(v7) = BYTE1(v14);
            if ( BYTE1(v14) != v8 )
              break;
          }
          v15 = 32LL * v12;
          LODWORD(v7) = _InterlockedCompareExchange(
                          (volatile signed __int32 *)(v15 + *(_QWORD *)(a2 + 32)),
                          v14 - 8,
                          v14);
          if ( v14 == (_DWORD)v7 )
          {
            v16 = *(_QWORD *)(a2 + 32);
            v17 = *(_QWORD *)(v13 + v16 + 16);
            if ( v17 )
            {
              *(_DWORD *)(v13 + v16) = 0;
              v7 = *(_UNKNOWN ***)(a2 + 32);
              v7[(unsigned __int64)v15 / 8 + 2] = 0LL;
              if ( (v14 & 1) == 0 )
              {
                if ( (v14 & 0x40) != 0 )
                {
                  if ( *(_QWORD *)(v17 + 8) )
                  {
                    v18 = *(_QWORD *)(a2 + 200);
                    do
                    {
                      v19 = v18;
                      *(_QWORD *)(*(_QWORD *)(v17 + 8) + 24LL) = v18;
                      v18 = _InterlockedCompareExchange64(
                              (volatile signed __int64 *)(a2 + 200),
                              *(_QWORD *)(v17 + 8),
                              v18);
                    }
                    while ( v18 != v19 );
                    *(_QWORD *)(v17 + 8) = 0LL;
                  }
                  if ( (v14 & 0x80u) != 0 )
                  {
                    v20 = *(_QWORD *)(v17 + 16);
                    StorPortExtendedFunction(1LL, a1, v17, v15);
                    v17 = v20;
                  }
                  LOWORD(v7) = _InterlockedDecrement16((volatile signed __int16 *)v17);
                  if ( !(_WORD)v7 )
                    LOWORD(v7) = StorPortNotification(0x2000LL, a1, v17);
                }
                else
                {
                  v21 = sub_140005000(v17);
                  *(_BYTE *)(v17 + 3) = a7;
                  if ( v21 )
                  {
                    v22 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v21 + 4192);
                    if ( v22 )
                      v22(a1, v17, 0LL);
                  }
                  LOWORD(v7) = sub_14000A8A0(a1, v17, 0);
                }
              }
              ++*(_DWORD *)(a2 + 140);
              _InterlockedAdd16((volatile signed __int16 *)(a2 + 136), 0xFFFFu);
              v8 = a4;
            }
            else
            {
              *(_DWORD *)(a1 + 4056) |= 0x8000u;
              LODWORD(v7) = *(_DWORD *)(a1 + 128);
              if ( ((unsigned __int8)v7 & 0x40) != 0 )
                MEMORY[6] = -1;
            }
            break;
          }
          v14 = (int)v7;
        }
        while ( ((unsigned __int8)v7 & 8) != 0 );
      }
      ++v12;
      v13 += 32LL;
    }
    while ( v12 < a3 );
  }
  if ( byte_140042130 || (*(_DWORD *)(a1 + 4056) & 0x200) == 0 )
    LOWORD(v7) = sub_14001D628(a1, (_QWORD *)a2, v8, a5, 0, a7);
  return (__int16)v7;
}
