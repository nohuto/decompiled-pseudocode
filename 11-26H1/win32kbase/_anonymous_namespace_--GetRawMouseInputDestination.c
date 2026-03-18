/*
 * XREFs of _anonymous_namespace_::GetRawMouseInputDestination @ 0x140190D44
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     HasHidTable @ 0x14006CFAC (HasHidTable.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_OWORD *__fastcall anonymous_namespace_::GetRawMouseInputDestination(_OWORD *a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _OWORD v16[7]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  v5 = *(_QWORD *)(W32GetUserSessionState(v3, v2, v4) + 18928);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 112);
    v7 = v6 ? *(_QWORD *)(v6 + 16) : *(_QWORD *)(v5 + 96);
    if ( v7 && (unsigned int)HasHidTable(v7) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 456) + 824LL) + 64LL);
      memset(v16, 0, sizeof(v16));
      if ( v8 )
      {
        LODWORD(v16[0]) = 4;
        *(_QWORD *)&v16[5] = v8;
        HIDWORD(v16[5]) = 2;
      }
      v9 = v16[1];
      *a1 = v16[0];
      v10 = v16[2];
      a1[1] = v9;
      v11 = v16[3];
      a1[2] = v10;
      v12 = v16[4];
      a1[3] = v11;
      v13 = v16[5];
      a1[4] = v12;
      v14 = v16[6];
      a1[5] = v13;
      a1[6] = v14;
    }
  }
  return a1;
}
