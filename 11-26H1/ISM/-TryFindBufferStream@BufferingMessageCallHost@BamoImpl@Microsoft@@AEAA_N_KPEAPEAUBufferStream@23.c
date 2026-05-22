/*
 * XREFs of ?TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23@@Z @ 0x1800AE418
 * Callers:
 *     ?CancelBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z @ 0x1800ABE40 (-CancelBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z.c)
 *     ?SubmitBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z @ 0x1800AE290 (-SubmitBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::TryFindBufferStream(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        unsigned __int64 a2,
        struct Microsoft::BamoImpl::BufferStream **a3)
{
  __int64 v3; // r10
  __int64 v4; // rcx
  __int64 i; // r9
  __int64 *v6; // rax

  v3 = *((_QWORD *)this + 4);
  v4 = v3;
  for ( i = *(_QWORD *)(v3 + 8); !*(_BYTE *)(i + 25); i = *v6 )
  {
    v6 = (__int64 *)(i + 16);
    if ( *(_QWORD *)(i + 32) >= a2 )
    {
      v6 = (__int64 *)i;
      v4 = i;
    }
  }
  if ( *(_BYTE *)(v4 + 25) || a2 < *(_QWORD *)(v4 + 32) || v4 == v3 )
  {
    *a3 = 0LL;
    return 0;
  }
  else
  {
    *a3 = *(struct Microsoft::BamoImpl::BufferStream **)(v4 + 40);
    return 1;
  }
}
