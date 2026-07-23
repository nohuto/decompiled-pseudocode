/*
 * XREFs of MiSharePages @ 0x1402E9008
 * Callers:
 *     MiProcessCrcList @ 0x140A67C40 (MiProcessCrcList.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 *     MiConvertStandbyToProto @ 0x1402E8EE8 (MiConvertStandbyToProto.c)
 *     MiSharePagesYield @ 0x1402E9160 (MiSharePagesYield.c)
 *     MiSharePagesLockPageTable @ 0x1402E932C (MiSharePagesLockPageTable.c)
 *     MiSharePagePrepare @ 0x1402E9990 (MiSharePagePrepare.c)
 *     MiConvertPrivateToProto @ 0x1402E9B0C (MiConvertPrivateToProto.c)
 *     MiSharePageAttach @ 0x1402EA178 (MiSharePageAttach.c)
 *     MiSharePagesCleanup @ 0x140311260 (MiSharePagesCleanup.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiSharePages(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r14
  __int64 v7; // r15
  _QWORD *v8; // rbx
  _QWORD *i; // rdx
  _QWORD *v10; // rsi
  int v11; // eax
  int v12; // eax
  __int64 UltraMapping; // rax
  bool v15; // zf
  int v16; // eax
  _QWORD v17[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v18; // [rsp+30h] [rbp-D0h]
  char v19[20]; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD *v20; // [rsp+48h] [rbp-B8h]
  int v21; // [rsp+A4h] [rbp-5Ch]

  memset_0(v19, 0, 0xECuLL);
  v17[0] = a1;
  v17[1] = a2;
  v18 = a3;
  if ( (int)MiSharePageAttach(v17) >= 0 )
  {
    v6 = *(_QWORD *)(a2 + 40);
    v7 = *(_QWORD *)(a1 + 104);
    v20 = *(_QWORD **)(a2 + 48);
    do
    {
      if ( (int)MiSharePagePrepare(v17) < 0 )
        break;
      v8 = v20;
      for ( i = v20; ; i = v10 )
      {
        v12 = MiSharePagesYield(v17, i);
        if ( v12 < 0 )
          break;
        v10 = (_QWORD *)*v8;
        v11 = MiSharePagesLockPageTable(v17, v8);
        if ( v11 >= 0 )
        {
          UltraMapping = MiGetUltraMapping(a1 + 256, 3uLL, 2LL, 4);
          v15 = (v19[0] & 0x40) == 0;
          *(_QWORD *)(a1 + 96) = UltraMapping;
          if ( v15 )
            v16 = MiConvertStandbyToProto(a1, (__int64)v8);
          else
            v16 = MiConvertPrivateToProto(v17, v8);
          *(_QWORD *)(a1 + 96) = 0LL;
          if ( v16 >= 0 )
          {
            ++*(_QWORD *)(v7 + 8);
            ++v21;
            if ( v6 )
              _InterlockedDecrement64((volatile signed __int64 *)(v6 + 648));
          }
        }
        else
        {
          if ( v11 != -1073741267 )
            v8 = v10;
          v10 = v8;
        }
        v8 = v10;
      }
    }
    while ( v12 == -1073741267 );
  }
  return MiSharePagesCleanup(v17);
}
