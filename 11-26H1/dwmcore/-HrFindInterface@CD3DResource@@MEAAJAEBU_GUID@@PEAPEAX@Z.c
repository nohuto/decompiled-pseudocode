/*
 * XREFs of ?HrFindInterface@CD3DResource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180295B10
 * Callers:
 *     ?HrFindInterface@CD3DSurface@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A48E0 (-HrFindInterface@CD3DSurface@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CCrossAdapterTexture@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B7E40 (-HrFindInterface@CCrossAdapterTexture@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CDeviceTexture@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B7EE0 (-HrFindInterface@CDeviceTexture@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DResource::HrFindInterface(CD3DResource *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  unsigned int v5; // ecx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
  v5 = 0;
  if ( v4 )
    return (unsigned int)-2147467262;
  else
    *a3 = this;
  return v5;
}
