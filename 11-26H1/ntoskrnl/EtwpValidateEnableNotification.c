/*
 * XREFs of EtwpValidateEnableNotification @ 0x140979F2C
 * Callers:
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckNotificationAccess @ 0x14097A0C0 (EtwpCheckNotificationAccess.c)
 *     EtwpValidateFilterDescriptors @ 0x140AA2B54 (EtwpValidateFilterDescriptors.c)
 */

__int64 __fastcall EtwpValidateEnableNotification(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        unsigned int **a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  bool v7; // cf
  int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int *v15; // rax
  bool v16; // zf
  int v17; // eax
  unsigned int v18; // eax
  int v20; // eax

  v6 = 0;
  v7 = *(_DWORD *)(a2 + 4) < 0x78u;
  *a5 = 0LL;
  if ( v7 || *(_DWORD *)(a2 + 116) && (unsigned int)EtwpValidateFilterDescriptors(a2, a6) )
    return 3221225485LL;
  v12 = *(_DWORD *)(a2 + 72);
  if ( v12 )
  {
    if ( (unsigned int)(v12 - 1) > 1 )
      return 3221225485LL;
  }
  v13 = *(unsigned __int16 *)(a2 + 78);
  *(_BYTE *)(a4 + 18) = (v13 & 0x8000) != 0;
  if ( (v13 & 0x8000) != 0 )
  {
    v20 = *(_DWORD *)(a2 + 80);
    if ( (v20 & 0x20) != 0 || (v20 & 0x400) != 0 )
      return 3221225485LL;
  }
  else
  {
    if ( v13 == 3 )
      return 3221225506LL;
    v14 = *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 - *(_QWORD *)(a2 + 40);
    if ( *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 == *(_QWORD *)(a2 + 40) )
      v14 = *(_QWORD *)PrivateLoggerNotificationGuid.Data4 - *(_QWORD *)(a2 + 48);
    if ( !v14 )
      return 3221225485LL;
    v15 = EtwpAcquireLoggerContextByLoggerId(a1, v13, 0);
    if ( !v15 )
      goto LABEL_34;
    v16 = a1 == EtwpHostSiloState;
    *a5 = v15;
    if ( !v16 && (*(_DWORD *)(a2 + 80) & 0x400) != 0 || (*(_DWORD *)(a2 + 80) & 0x20) != 0 && (v15[3] & 0x1030800) != 0 )
      return 3221225485LL;
    if ( (v15[204] & 0x40) != 0 )
    {
LABEL_34:
      v6 = -1073741162;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)(v15 + 69);
      if ( (v15[3] & 0x80u) != 0 )
        *(_BYTE *)(a4 + 16) = 1;
      if ( (v15[3] & 0x1000000) != 0 )
        *(_BYTE *)(a4 + 17) = 1;
      if ( a3 )
        v6 = EtwpCheckNotificationAccess(a2 + 40, a4);
    }
  }
  v17 = *(_DWORD *)(a2 + 80);
  if ( (v17 & 0x10) != 0 )
    v18 = v17 & 0xFFFFFFEF;
  else
    v18 = v17 | 0x40;
  *(_DWORD *)(a2 + 80) = v18;
  return v6;
}
