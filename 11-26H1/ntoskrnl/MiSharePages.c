/*
 * XREFs of MiSharePages @ 0x140306F88
 * Callers:
 *     MiProcessCrcList @ 0x140A5ACD0 (MiProcessCrcList.c)
 * Callees:
 *     MiGetUltraMapping @ 0x1402881D0 (MiGetUltraMapping.c)
 *     MiSharePagesCleanup @ 0x1402C65C0 (MiSharePagesCleanup.c)
 *     MiConvertStandbyToProto @ 0x140306E68 (MiConvertStandbyToProto.c)
 *     MiSharePagesYield @ 0x1403070E0 (MiSharePagesYield.c)
 *     MiSharePagesLockPageTable @ 0x1403072AC (MiSharePagesLockPageTable.c)
 *     MiSharePagePrepare @ 0x140307910 (MiSharePagePrepare.c)
 *     MiConvertPrivateToProto @ 0x140307A8C (MiConvertPrivateToProto.c)
 *     MiSharePageAttach @ 0x1403080F8 (MiSharePageAttach.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiSharePages(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // r15
  _QWORD *v10; // rbx
  _QWORD *i; // rdx
  _QWORD *v12; // rsi
  int v13; // eax
  int v14; // eax
  __int64 UltraMapping; // rax
  bool v17; // zf
  int v18; // eax
  __int64 v19[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v20; // [rsp+30h] [rbp-D0h]
  char v21[20]; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD *v22; // [rsp+48h] [rbp-B8h]
  int v23; // [rsp+A4h] [rbp-5Ch]

  memset_0(v21, 0, 0xECuLL);
  v19[0] = a1;
  v19[1] = a2;
  v20 = a3;
  if ( (int)MiSharePageAttach(v19) >= 0 )
  {
    v8 = *(_QWORD *)(a2 + 40);
    v9 = *(_QWORD *)(a1 + 104);
    v22 = *(_QWORD **)(a2 + 48);
    do
    {
      if ( (int)MiSharePagePrepare(v19) < 0 )
        break;
      v10 = v22;
      for ( i = v22; ; i = v12 )
      {
        v14 = MiSharePagesYield(v19, i);
        if ( v14 < 0 )
          break;
        v12 = (_QWORD *)*v10;
        v13 = MiSharePagesLockPageTable(v19, v10);
        if ( v13 >= 0 )
        {
          UltraMapping = MiGetUltraMapping(a1 + 256, 3uLL, 2LL, 4);
          v17 = (v21[0] & 0x40) == 0;
          *(_QWORD *)(a1 + 96) = UltraMapping;
          if ( v17 )
            v18 = MiConvertStandbyToProto(a1, (__int64)v10);
          else
            v18 = MiConvertPrivateToProto(v19, v10);
          *(_QWORD *)(a1 + 96) = 0LL;
          if ( v18 >= 0 )
          {
            ++*(_QWORD *)(v9 + 8);
            ++v23;
            if ( v8 )
              _InterlockedDecrement64((volatile signed __int64 *)(v8 + 648));
          }
        }
        else
        {
          if ( v13 != -1073741267 )
            v10 = v12;
          v12 = v10;
        }
        v10 = v12;
      }
    }
    while ( v14 == -1073741267 );
  }
  return MiSharePagesCleanup(v19, v6, v7);
}
