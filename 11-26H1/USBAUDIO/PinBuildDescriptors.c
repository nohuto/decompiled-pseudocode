/*
 * XREFs of PinBuildDescriptors @ 0x14003F668
 * Callers:
 *     FilterCreateFilterContext @ 0x140030498 (FilterCreateFilterContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 *     PinGetDataFlow @ 0x14002E3B0 (PinGetDataFlow.c)
 *     PinConflictingFormats @ 0x140030908 (PinConflictingFormats.c)
 *     PinGetCategoryForBridgePin @ 0x140030978 (PinGetCategoryForBridgePin.c)
 *     PinGetTerminalUnit @ 0x14003FCF4 (PinGetTerminalUnit.c)
 */

__int64 __fastcall PinBuildDescriptors(__int64 a1, char **a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  int v5; // r14d
  unsigned int v6; // r10d
  unsigned int v7; // r11d
  __int64 *v8; // rax
  unsigned int v9; // edi
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  unsigned int v12; // esi
  int v13; // eax
  signed int DataFlow; // ebx
  __int64 v15; // r12
  unsigned int v16; // r8d
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // r9d
  signed int v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // r10d
  int v24; // ecx
  unsigned __int64 v25; // rax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // r10d
  int v29; // ecx
  unsigned __int64 v30; // rax
  signed int v31; // edx
  unsigned int v32; // ecx
  int v33; // eax
  unsigned __int64 v34; // rdi
  unsigned int v35; // eax
  char *Pool2; // rsi
  unsigned int v37; // r14d
  char *v38; // r15
  __int64 v39; // r12
  char *v40; // rdi
  __int64 v41; // rsi
  __int64 TerminalUnit; // rax
  __int64 v43; // r10
  __int64 v44; // r11
  bool v45; // al
  char *v46; // rcx
  char *v47; // rcx
  bool v48; // al
  int *v49; // rcx
  int *v50; // rax
  bool v51; // zf
  int v52; // r8d
  const GUID *v53; // r9
  int v54; // r10d
  __int64 v55; // rax
  unsigned int v56; // r12d
  unsigned int v57; // edi
  char *v58; // r13
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // r10
  char v62; // r11
  char v63; // dl
  int v64; // eax
  _UNKNOWN **v65; // rax
  unsigned int v67; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v68; // [rsp+54h] [rbp-25h] BYREF
  int v69; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v70; // [rsp+5Ch] [rbp-1Dh]
  unsigned __int64 v71; // [rsp+60h] [rbp-19h] BYREF
  char *v72; // [rsp+68h] [rbp-11h]
  char *v73; // [rsp+70h] [rbp-9h] BYREF
  __int64 v74; // [rsp+78h] [rbp-1h]
  char *v75; // [rsp+80h] [rbp+7h]
  __int64 v76; // [rsp+88h] [rbp+Fh]
  int v79; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v80; // [rsp+F8h] [rbp+7Fh] BYREF

  v76 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v69 = 0;
  v5 = 0;
  v80 = 0;
  v6 = 0;
  v68 = 0;
  v67 = 0;
  v7 = 0;
  v8 = *(__int64 **)(v76 + 80);
  v9 = 0;
  v74 = v76 + 80;
  v10 = 0;
  v70 = 0;
  if ( v8 != (__int64 *)(v76 + 80) )
  {
    do
    {
      if ( *((_DWORD *)v8 + 5) <= 1u )
      {
        if ( *((_BYTE *)v8 + 72) )
          ++v10;
        else
          ++v4;
      }
      v8 = (__int64 *)*v8;
    }
    while ( v8 != (__int64 *)(v76 + 80) );
    v70 = v4;
  }
  v11 = v4 + v10;
  v12 = 0;
  *a3 = v4 + v10;
  *a4 = 176;
  LODWORD(v72) = v4 + v10;
  if ( v10 )
  {
    do
    {
      v79 = 0;
      LODWORD(v73) = 0;
      LODWORD(v71) = 0;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int *, int *, char **, unsigned __int64 *))(pExtBusDeviceDispatchTable + 72))(
              a1,
              v12,
              0LL,
              0LL,
              0LL,
              &v69,
              &v79,
              &v73,
              &v71);
      v6 = v80;
      DataFlow = v13;
      v7 = v68;
      v9 = v67;
      if ( v13 >= 0 )
      {
        v6 = v79 + v80;
        v7 = (_DWORD)v73 + v68;
        v9 = v71 + v67;
        v67 += v71;
        v80 += v79;
        v68 += (unsigned int)v73;
      }
      ++v12;
    }
    while ( v12 < v10 );
    v11 = (unsigned int)v72;
    if ( v13 < 0 )
      return (unsigned int)DataFlow;
    v5 = v69;
  }
  v15 = v11;
  v16 = -1;
  v17 = 336LL * v11;
  if ( v17 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v18 = v6 * (unsigned __int64)(unsigned int)(v5 + 8);
  v19 = -1;
  v20 = 336 * v11;
  if ( v18 <= 0xFFFFFFFF )
    v19 = v6 * (v5 + 8);
  v21 = v18 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v18 <= 0xFFFFFFFF )
  {
    v22 = v17 + v19;
    v20 = -1;
    if ( v22 >= (unsigned int)v17 )
      v20 = v22;
    v21 = v22 < (unsigned int)v17 ? 0xC0000095 : 0;
  }
  v23 = v20;
  if ( v21 >= 0 )
  {
    v24 = -1;
    v25 = 8LL * v7;
    if ( v25 <= 0xFFFFFFFF )
      v24 = 8 * v7;
    v21 = v25 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v25 <= 0xFFFFFFFF )
    {
      v26 = v20 + v24;
      v27 = -1;
      if ( v26 >= v20 )
        v27 = v26;
      v20 = v27;
      v21 = v26 < v23 ? 0xC0000095 : 0;
    }
  }
  v28 = v20;
  if ( v21 < 0 )
    return (unsigned int)-1073741670;
  v29 = -1;
  v30 = 16LL * v9;
  if ( v30 <= 0xFFFFFFFF )
    v29 = 16 * v9;
  v31 = v30 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v30 <= 0xFFFFFFFF )
  {
    v32 = v20 + v29;
    v33 = -1;
    if ( v32 >= v20 )
      v33 = v32;
    v20 = v33;
    v31 = v32 < v28 ? 0xC0000095 : 0;
  }
  if ( v31 < 0 )
    return (unsigned int)-1073741670;
  v34 = 16LL * v70;
  if ( v34 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v35 = v34 + v20;
  if ( (unsigned int)v34 + v20 >= v20 )
    v16 = v34 + v20;
  DataFlow = v35 < v20 ? 0xC0000095 : 0;
  if ( v35 < v20 )
    return (unsigned int)-1073741670;
  Pool2 = (char *)ExAllocatePool2(64LL, v16, 1096972357LL);
  v73 = Pool2;
  if ( (*a2 = Pool2) == 0LL )
    return (unsigned int)-1073741670;
  v37 = 0;
  v38 = &Pool2[176 * v11];
  v75 = &v38[160 * v15];
  v72 = &v75[v34];
  v39 = (__int64)&v75[16 * v67 + v34];
  v71 = v39 + 8 * (v80 + (unsigned __int64)v68);
  if ( v10 )
  {
    v40 = Pool2 + 32;
    v41 = v74;
    do
    {
      if ( DataFlow < 0 )
        break;
      TerminalUnit = PinGetTerminalUnit(v41);
      v45 = TerminalUnit && *(_DWORD *)(TerminalUnit + 68) == 257 && *(_DWORD *)(TerminalUnit + 76) == 2;
      LOBYTE(v79) = v45;
      *((_QWORD *)v40 - 4) = &PinDispatch;
      if ( v45 )
      {
        *((_QWORD *)v40 - 3) = 0LL;
      }
      else
      {
        *((_QWORD *)v40 - 3) = v38;
        *((_QWORD *)v38 + 1) = &off_14001E540;
        *(_DWORD *)v38 = 5;
        *((_DWORD *)v38 + 1) = 72;
      }
      *((_DWORD *)v40 - 4) = 1;
      *((_QWORD *)v40 - 1) = &PinInterface;
      *(_DWORD *)v40 = 1;
      *((_QWORD *)v40 + 1) = &PinMedium;
      DataFlow = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, int *, unsigned int *, unsigned int *, unsigned int *))(pExtBusDeviceDispatchTable + 72))(
                   a1,
                   v37,
                   v39,
                   v44,
                   v43,
                   &v69,
                   &v80,
                   &v68,
                   &v67);
      if ( DataFlow >= 0 )
      {
        v46 = v72;
        *((_QWORD *)v40 + 17) = v72;
        *((_DWORD *)v40 + 32) = v67;
        v47 = &v46[16 * v67];
        *((_DWORD *)v40 + 4) = v68 + v80;
        *((_QWORD *)v40 + 3) = v39;
        v72 = v47;
        if ( v80 <= 1 )
        {
          v40[116] = 0;
          *((_DWORD *)v40 + 19) = 1;
          *((_DWORD *)v40 + 26) = 1;
        }
        else
        {
          *((_DWORD *)v40 + 26) = 1;
          v48 = PinConflictingFormats((__int64)(v40 - 16));
          v40[116] = v48;
          *((_DWORD *)v40 + 19) = v48 + 1;
        }
        *((_DWORD *)v40 + 20) = 0;
        *((_DWORD *)v40 + 27) = 0;
        v39 += 8LL * (v80 + v68);
        v71 += v69 * v80;
        DataFlow = PinGetDataFlow();
        if ( DataFlow >= 0 )
        {
          v49 = (int *)(v40 + 36);
          v50 = (int *)(v40 + 72);
          if ( (_BYTE)v79 )
          {
            *((_QWORD *)v40 + 12) = PinMIDIDataFormatIntersection;
            v51 = *((_DWORD *)v40 + 8) == 1;
            *((_QWORD *)v40 + 5) = &KSCATEGORY_WDMAUD_USE_PIN_NAME;
            if ( v51 )
            {
              *v49 = 1;
              *v50 = 2162690;
            }
            else
            {
              *v49 = 3;
              *v50 = 10;
            }
          }
          else
          {
            *((_QWORD *)v40 + 12) = PinDataFormatIntersection;
            if ( *((_DWORD *)v40 + 8) == 1 )
            {
              v52 = 2162690;
              v53 = &KSCATEGORY_AUDIO;
              v54 = 1;
            }
            else
            {
              v52 = 65538;
              v53 = &PINNAME_VIDEO_CAPTURE;
              v54 = 3;
            }
            *v49 = v54;
            *((_QWORD *)v40 + 5) = v53;
            *v50 = v52;
            DataFlow = -1073741275;
            v55 = PinGetTerminalUnit(v41);
            if ( v55 )
            {
              DataFlow = 0;
              *((_DWORD *)v40 + 28) = *(_DWORD *)(v55 + 28);
            }
          }
          *((_QWORD *)v40 + 11) = &AllocatorFraming;
        }
      }
      ++v37;
      v38 += 48;
      v40 += 176;
    }
    while ( v37 < v10 );
    Pool2 = v73;
  }
  v56 = v70;
  v57 = 0;
  if ( v70 )
  {
    v58 = v75;
    while ( DataFlow >= 0 )
    {
      PinGetTerminalUnit(v74);
      *(_QWORD *)&Pool2[176 * v37 + 136] = 0LL;
      v60 = PinGetTerminalUnit(v59);
      v63 = 0;
      if ( v60 )
      {
        if ( *(_DWORD *)(v60 + 20) == 1 )
        {
          v64 = *(_DWORD *)(v60 + 68) - 1538;
          if ( !v64 || v64 == 3 )
            v63 = 1;
        }
      }
      Pool2[v61 + 149] = v63;
      *(_QWORD *)&Pool2[v61] = 0LL;
      *(_QWORD *)&Pool2[v61 + 8] = 0LL;
      *(_QWORD *)&Pool2[v61 + 108] = 0LL;
      *(_QWORD *)&Pool2[v61 + 24] = &PinInterface;
      *(_QWORD *)&Pool2[v61 + 40] = &PinMedium;
      v65 = &pMIDIBridgePinFormats;
      if ( !v62 )
        v65 = &pAudioBridgePinFormats;
      *(_DWORD *)&Pool2[v61 + 16] = 1;
      *(_DWORD *)&Pool2[v61 + 32] = 1;
      *(_QWORD *)&Pool2[v61 + 72] = &v58[16 * v57];
      *(_DWORD *)&Pool2[v61 + 48] = 1;
      *(_QWORD *)&Pool2[v61 + 56] = v65;
      *(_DWORD *)&Pool2[v61 + 68] = 4;
      DataFlow = PinGetDataFlow();
      if ( DataFlow >= 0 )
        PinGetCategoryForBridgePin(v76);
      ++v57;
      ++v37;
      if ( v57 >= v56 )
        goto LABEL_82;
    }
    goto LABEL_84;
  }
LABEL_82:
  if ( DataFlow < 0 || (DataFlow = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Pool2, ExFreePool), DataFlow < 0) )
LABEL_84:
    ExFreePool(Pool2);
  return (unsigned int)DataFlow;
}
