/*
 * XREFs of ?QueryDeviceRemoteBit@FileQueryObj@Gre@@QEBA_NPEA_N@Z @ 0x1401E7478
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140305B64 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::FileQueryObj::QueryDeviceRemoteBit(void **this, bool *a2)
{
  void *v2; // rcx
  bool result; // al
  struct _IO_STATUS_BLOCK v5; // [rsp+30h] [rbp-18h] BYREF
  char v6; // [rsp+50h] [rbp+8h] BYREF

  v2 = *this;
  v6 = 0;
  v5 = 0LL;
  if ( ZwQueryInformationFile(v2, &v5, &v6, 1u, FileIsRemoteDeviceInformation) < 0 )
    return 0;
  result = 1;
  *a2 = v6 != 0;
  return result;
}
