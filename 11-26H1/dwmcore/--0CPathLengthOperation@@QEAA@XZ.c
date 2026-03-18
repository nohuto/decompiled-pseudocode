/*
 * XREFs of ??0CPathLengthOperation@@QEAA@XZ @ 0x180051C34
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x180053598 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ?AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ @ 0x180052740 (-AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ.c)
 */

CPathLengthOperation *__fastcall CPathLengthOperation::CPathLengthOperation(CPathLengthOperation *this)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  Microsoft::BamoImpl::BamoPrincipalImpl *v4; // rdi
  Microsoft::BamoImpl::BamoPrincipalImpl *v5; // rdi
  Microsoft::BamoImpl::BamoPrincipalImpl *v6; // rdi
  __int64 v7; // rsi

  v1 = 4LL;
  v3 = 4LL;
  v4 = this;
  do
  {
    Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal(v4);
    v4 = (Microsoft::BamoImpl::BamoPrincipalImpl *)((char *)v4 + 8);
    --v3;
  }
  while ( v3 );
  v5 = (CPathLengthOperation *)((char *)this + 48);
  do
  {
    Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal(v5);
    v5 = (Microsoft::BamoImpl::BamoPrincipalImpl *)((char *)v5 + 8);
    --v1;
  }
  while ( v1 );
  *((_DWORD *)this + 11) = 919713559;
  v6 = (CPathLengthOperation *)((char *)this + 92);
  *((_DWORD *)this + 8) = 1069547520;
  v7 = 16LL;
  *((_DWORD *)this + 10) = 1052770304;
  do
  {
    Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal(v6);
    v6 = (Microsoft::BamoImpl::BamoPrincipalImpl *)((char *)v6 + 8);
    --v7;
  }
  while ( v7 );
  return this;
}
