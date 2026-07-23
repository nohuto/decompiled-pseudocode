/*
 * XREFs of WmipQueryWmiDataBlock @ 0x140AC6630
 * Callers:
 *     IoWMISystemControl @ 0x140AC63D4 (IoWMISystemControl.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1403C0F80 (WmipUnreferenceRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x14048FD3C (WmipFindRegEntryByDevice.c)
 *     IoGetDeviceInstanceName @ 0x1404D9C4C (IoGetDeviceInstanceName.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WmipGetSMBiosEventlog @ 0x140828BC8 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x140828E1C (WmipGetSysIds.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     IoWMICompleteRequest @ 0x140AC67B8 (IoWMICompleteRequest.c)
 *     WmipGetSMBiosTableData @ 0x140AC6900 (WmipGetSMBiosTableData.c)
 */

__int64 __fastcall WmipQueryWmiDataBlock(
        __int64 a1,
        void *a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned __int64 a8)
{
  unsigned __int64 v8; // rbx
  int DeviceInstanceName; // esi
  int *v10; // rdi
  void *v12; // r13
  unsigned int v13; // r14d
  unsigned int *v14; // r15
  unsigned int v15; // eax
  char *v16; // rcx
  int SMBiosEventlog; // eax
  unsigned int v19; // eax
  int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // r15
  ULONG_PTR v23; // rcx
  unsigned int v24; // ecx
  wchar_t *v25; // rdx
  __int64 v26; // rbx
  _QWORD *RegEntryByDevice; // rax
  ULONG_PTR v28; // rcx
  int v29; // r13d
  size_t Length; // r15
  __int64 v31; // r14
  wchar_t *Buffer; // rdx
  _WORD *v33; // rax
  _WORD *v34; // rbx
  ULONG v35; // [rsp+20h] [rbp-E0h]
  unsigned int v36; // [rsp+30h] [rbp-D0h] BYREF
  void *v37; // [rsp+38h] [rbp-C8h] BYREF
  void *v38; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  void *Src; // [rsp+58h] [rbp-A8h] BYREF
  int v41[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+68h] [rbp-98h]
  const wchar_t *v43; // [rsp+70h] [rbp-90h]
  unsigned int *v44; // [rsp+78h] [rbp-88h]
  int v45; // [rsp+80h] [rbp-80h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  int v47; // [rsp+A0h] [rbp-60h]
  const wchar_t *v48; // [rsp+A8h] [rbp-58h]
  void **v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h]
  __int64 v51; // [rsp+D0h] [rbp-30h]
  int v52; // [rsp+D8h] [rbp-28h]
  const wchar_t *v53; // [rsp+E0h] [rbp-20h]
  void **v54; // [rsp+E8h] [rbp-18h]
  int v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  int v57; // [rsp+110h] [rbp+10h]

  v8 = a8;
  DeviceInstanceName = 0;
  v10 = (int *)a6;
  v37 = a2;
  v12 = a2;
  v13 = 0;
  v14 = 0LL;
  switch ( a3 )
  {
    case 0:
      UnicodeString = 0LL;
      RegEntryByDevice = (_QWORD *)WmipFindRegEntryByDevice(a1);
      Src = RegEntryByDevice;
      v22 = (__int64)RegEntryByDevice;
      if ( !RegEntryByDevice )
        goto LABEL_15;
      v28 = RegEntryByDevice[3];
      if ( v28 )
      {
        DeviceInstanceName = IoGetDeviceInstanceName(v28, &UnicodeString);
        if ( DeviceInstanceName >= 0 )
        {
          v29 = UnicodeString.Length + 2;
          v13 = v29 + (a5 - 1) * ((UnicodeString.Length + 9) & 0xFFFFFFF8);
          v36 = v13;
          if ( v13 > a7 )
          {
            DeviceInstanceName = -1073741789;
          }
          else
          {
            memset_0((void *)a8, 0, v13);
            if ( a5 )
            {
              Length = UnicodeString.Length;
              v31 = a5;
              do
              {
                Buffer = UnicodeString.Buffer;
                v33 = (_WORD *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                *v10++ = v29;
                v34 = v33 + 1;
                *v33 = Length;
                memmove(v33 + 1, Buffer, Length);
                v8 = (unsigned __int64)v34 + Length;
                --v31;
              }
              while ( v31 );
              v13 = v36;
              v22 = (__int64)Src;
            }
          }
          RtlFreeAnsiString(&UnicodeString);
          v12 = v37;
          goto LABEL_47;
        }
LABEL_45:
        DeviceInstanceName = -1073741163;
LABEL_47:
        WmipUnreferenceRegEntry(v22);
        return IoWMICompleteRequest(a1, a2, v12, (unsigned int)DeviceInstanceName, v13);
      }
LABEL_46:
      DeviceInstanceName = -1073741823;
      goto LABEL_47;
    case 1:
      UnicodeString = 0LL;
      v21 = WmipFindRegEntryByDevice(a1);
      v22 = v21;
      if ( !v21 )
        goto LABEL_15;
      v23 = *(_QWORD *)(v21 + 24);
      if ( v23 )
      {
        DeviceInstanceName = IoGetDeviceInstanceName(v23, &UnicodeString);
        if ( DeviceInstanceName >= 0 )
        {
          v24 = UnicodeString.Length;
          v13 = UnicodeString.Length + 10;
          if ( v13 > a7 )
          {
            DeviceInstanceName = -1073741789;
          }
          else
          {
            v25 = UnicodeString.Buffer;
            *(_DWORD *)a8 = 1;
            *a6 = v13;
            *(_WORD *)(a8 + 4) = v24 + 4;
            v26 = v24;
            memmove((void *)(a8 + 6), v25, v24);
            *(_DWORD *)(v26 + a8 + 6) = 3145823;
          }
          RtlFreeAnsiString(&UnicodeString);
          goto LABEL_47;
        }
        goto LABEL_45;
      }
      goto LABEL_46;
    case 2:
      v36 = 0;
      v45 = 0x4000000;
      v42 = 292;
      v43 = L"BootArchitecture";
      v47 = 292;
      v44 = &v36;
      v50 = 0x4000000;
      v48 = L"PreferredProfile";
      v49 = &v37;
      v53 = L"Capabilities";
      v52 = 292;
      v55 = 0x4000000;
      v54 = &v38;
      LODWORD(v37) = 0;
      LODWORD(v38) = 0;
      *(_QWORD *)v41 = 0LL;
      v46 = 0LL;
      v51 = 0LL;
      v56 = 0LL;
      v57 = 0;
      if ( (int)RtlpQueryRegistryValues(
                  0LL,
                  (const WCHAR *)L"\\Registry\\Machine\\Hardware\\Description\\System",
                  (__int64)v41,
                  0LL,
                  v35,
                  1) < 0 )
        goto LABEL_15;
      v13 = 12;
      if ( a7 >= 0xC )
      {
        *(_DWORD *)a8 = v36;
        *(_DWORD *)(a8 + 4) = (_DWORD)v37;
        *(_DWORD *)(a8 + 8) = (_DWORD)v38;
        goto LABEL_9;
      }
      goto LABEL_27;
  }
  if ( a3 != 3 )
  {
    if ( a3 != 4 && a3 != 5 )
    {
      if ( a3 == 6 )
      {
        LODWORD(v37) = a7;
        SMBiosEventlog = WmipGetSMBiosEventlog(a8 & -(__int64)(a7 != 0), (unsigned int *)&v37);
        v13 = (unsigned int)v37;
        DeviceInstanceName = SMBiosEventlog;
        if ( SMBiosEventlog < 0 )
          return IoWMICompleteRequest(a1, a2, v12, (unsigned int)DeviceInstanceName, v13);
        goto LABEL_9;
      }
LABEL_15:
      DeviceInstanceName = -1073741163;
      return IoWMICompleteRequest(a1, a2, v12, (unsigned int)DeviceInstanceName, v13);
    }
    Src = 0LL;
    v36 = 0;
    v38 = 0LL;
    LODWORD(v37) = 0;
    DeviceInstanceName = WmipGetSysIds(&Src, &v36, &v38, &v37);
    if ( DeviceInstanceName < 0 )
      return IoWMICompleteRequest(a1, a2, v12, (unsigned int)DeviceInstanceName, v13);
    if ( a3 == 5 )
    {
      v19 = (unsigned int)v37;
      a2 = v38;
      v20 = 8 * (_DWORD)v37;
    }
    else
    {
      v19 = v36;
      a2 = Src;
      v20 = 16 * v36;
    }
    v13 = v20 + 4;
    if ( a7 >= v13 )
    {
      *a6 = v13;
      *(_DWORD *)a8 = v19;
      memmove((void *)(a8 + 4), a2, v13 - 4LL);
      DeviceInstanceName = 0;
      return IoWMICompleteRequest(a1, a2, v12, (unsigned int)DeviceInstanceName, v13);
    }
LABEL_27:
    DeviceInstanceName = -1073741789;
    return IoWMICompleteRequest(a1, a2, v12, (unsigned int)DeviceInstanceName, v13);
  }
  if ( a7 < 8 )
  {
    v16 = 0LL;
    v15 = 0;
  }
  else
  {
    v14 = (unsigned int *)(a8 + 4);
    v15 = a7 - 8;
    v16 = (char *)(a8 + 8);
  }
  v36 = v15;
  DeviceInstanceName = WmipGetSMBiosTableData(v16);
  v13 = v36 + 8;
  if ( DeviceInstanceName >= 0 )
  {
    *v14 = v36;
LABEL_9:
    *a6 = v13;
  }
  return IoWMICompleteRequest(a1, a2, v12, (unsigned int)DeviceInstanceName, v13);
}
