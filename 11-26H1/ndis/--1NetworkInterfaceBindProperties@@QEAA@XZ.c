/*
 * XREFs of ??1NetworkInterfaceBindProperties@@QEAA@XZ @ 0x1400E6150
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x14014E098 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NetworkInterfaceBindProperties::~NetworkInterfaceBindProperties(NetworkInterfaceBindProperties *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x7272414Bu);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x7272414Bu);
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x7272414Bu);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
}
