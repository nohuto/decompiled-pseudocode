/*
 * XREFs of ?CheckForSegmentedSignatureBlob@@YAJPEAXGPEAU_HIDP_VALUE_CAPS@@PEAG@Z @ 0x140198898
 * Callers:
 *     RIMApiSetValidateDeviceSignature @ 0x1400EE9C4 (RIMApiSetValidateDeviceSignature.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckForSegmentedSignatureBlob(
        PHIDP_PREPARSED_DATA PreparsedData,
        USHORT a2,
        struct _HIDP_VALUE_CAPS *a3,
        unsigned __int16 *a4)
{
  int v6; // ebx
  int v7; // esi
  NTSTATUS ValueCaps; // r10d
  USHORT v9; // r9
  unsigned __int16 v10; // dx
  USHORT *p_ReportCount; // rcx
  USHORT v12; // r8
  USHORT v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v6 = 0;
  v7 = 0;
  ValueCaps = HidP_GetValueCaps(HidP_Feature, a3, &v14, PreparsedData);
  if ( ValueCaps < 0 )
    return (unsigned int)-1073741668;
  v9 = v14;
  v10 = 0;
  if ( !v14 )
    return (unsigned int)-1073741668;
  p_ReportCount = &a3->ReportCount;
  do
  {
    v12 = p_ReportCount[18];
    if ( v12 == 198 )
    {
      if ( *(_DWORD *)(p_ReportCount - 1) == 65544 && *(p_ReportCount - 10) >= 0xFF00u )
        v6 = 1;
    }
    else if ( v12 == 199 && *p_ReportCount == 32 && *(p_ReportCount - 1) == 8 && *(p_ReportCount - 10) >= 0xFF00u )
    {
      v7 = 1;
      *a4 = v10;
    }
    ++v10;
    p_ReportCount += 36;
  }
  while ( v10 < v9 );
  if ( !v7 || !v6 )
    return (unsigned int)-1073741668;
  return (unsigned int)ValueCaps;
}
