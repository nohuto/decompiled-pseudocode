/*
 * XREFs of ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14016DA94
 * Callers:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401C0BA0 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1400AA340 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitSetTarget(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // si
  __int64 v4; // rbx
  _DWORD *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // r9d
  __int64 v9; // rax
  int v11; // edx
  __int64 v12; // rax
  _DWORD *v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
  {
    v4 = 0LL;
    v13 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x2CuLL, (void **)&v13) )
    {
      v5 = v13;
      *v13 = 44;
      *(_OWORD *)(v5 + 1) = 0LL;
      *(_OWORD *)(v5 + 5) = 0LL;
      *(_QWORD *)(v5 + 9) = 0LL;
      v5[1] = 19;
      v5[2] = *((_DWORD *)this + 8);
      if ( (*((_BYTE *)this + 128) & 1) != 0 && (v6 = *((_QWORD *)this + 9)) != 0 && (v7 = *(_QWORD *)(v6 + 16)) != 0 )
      {
        v5[4] = *(_DWORD *)(v7 + 32);
        if ( DirectComposition::CResourceMarshaler::IsDerivedResourceType(
               *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 16LL) + 36LL),
               68) )
        {
          v8 = v11;
        }
      }
      else
      {
        v8 = 0;
      }
      v5[3] = v8;
      v5[5] = *((_DWORD *)this + 20);
      v5[10] = *((_DWORD *)this + 16);
      v9 = *((_QWORD *)this + 11);
      if ( v9 )
      {
        *((_WORD *)v5 + 18) = *(unsigned __int8 *)(v9 + 4);
        *((_WORD *)v5 + 19) = **((_WORD **)this + 11);
        v12 = *((_QWORD *)this + 11);
        if ( *(_DWORD *)v12 == 1 )
        {
          v4 = *(unsigned __int8 *)(v12 + 8);
        }
        else if ( *(_DWORD *)v12 == 2 )
        {
          v4 = *(_QWORD *)(v12 + 8);
        }
      }
      else
      {
        v5[9] = 0;
      }
      *(_QWORD *)(v5 + 7) = v4;
      *((_DWORD *)this + 4) |= 0x80u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
