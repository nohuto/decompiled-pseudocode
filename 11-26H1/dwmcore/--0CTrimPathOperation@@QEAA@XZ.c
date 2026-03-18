/*
 * XREFs of ??0CTrimPathOperation@@QEAA@XZ @ 0x180051B20
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x18004FD7C (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z.c)
 * Callees:
 *     ?AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ @ 0x180052740 (-AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x180052E34 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

CTrimPathOperation *__fastcall CTrimPathOperation::CTrimPathOperation(CTrimPathOperation *this)
{
  unsigned int Size; // eax
  __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // r14
  Microsoft::BamoImpl::BamoPrincipalImpl *v9; // rdi
  Microsoft::BamoImpl::BamoPrincipalImpl *v10; // rdi
  Microsoft::BamoImpl::BamoPrincipalImpl *v11; // rbx
  __int64 v12; // rdi

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  Size = Path::Segment::GetSize(0LL);
  memset_0((char *)this + 48, 0, Size);
  LOBYTE(v3) = 2;
  *((_BYTE *)this + 48) = 0;
  v4 = Path::Segment::GetSize(v3);
  memset_0((char *)this + 64, 0, v4);
  LOBYTE(v5) = 5;
  *((_BYTE *)this + 64) = 2;
  v6 = Path::Segment::GetSize(v5);
  memset_0((char *)this + 80, 0, v6);
  v7 = 4LL;
  *((_BYTE *)this + 80) = 5;
  v8 = 4LL;
  v9 = (CTrimPathOperation *)((char *)this + 112);
  do
  {
    Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal(v9);
    v9 = (Microsoft::BamoImpl::BamoPrincipalImpl *)((char *)v9 + 8);
    --v8;
  }
  while ( v8 );
  v10 = (CTrimPathOperation *)((char *)this + 160);
  do
  {
    Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal(v10);
    v10 = (Microsoft::BamoImpl::BamoPrincipalImpl *)((char *)v10 + 8);
    --v7;
  }
  while ( v7 );
  *((_DWORD *)this + 39) = 919713559;
  v11 = (CTrimPathOperation *)((char *)this + 204);
  *((_DWORD *)this + 36) = 1069547520;
  v12 = 16LL;
  *((_DWORD *)this + 38) = 1052770304;
  do
  {
    Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal(v11);
    v11 = (Microsoft::BamoImpl::BamoPrincipalImpl *)((char *)v11 + 8);
    --v12;
  }
  while ( v12 );
  return this;
}
