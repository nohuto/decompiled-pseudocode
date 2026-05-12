/*
 * XREFs of sub_140139E20 @ 0x140139E20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     __report_rangecheckfailure @ 0x1400564A0 (__report_rangecheckfailure.c)
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_140085D5C @ 0x140085D5C (sub_140085D5C.c)
 *     sub_14013AC08 @ 0x14013AC08 (sub_14013AC08.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_140139E20(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v6; // r13
  int v7; // r9d
  char v8; // r8
  int v9; // r9d
  unsigned int v10; // edi
  unsigned int v11; // ecx
  __int64 *v12; // r12
  __int64 *v13; // r14
  unsigned int v14; // eax
  __int64 v15; // rdi
  const void *v16; // rax
  size_t v17; // r8
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  int v20; // r8d
  int v21; // r9d
  int v22; // r9d
  PDEVICE_OBJECT v23; // rcx
  unsigned __int16 v24; // dx
  __int64 v26; // [rsp+20h] [rbp-50h]
  __int64 v27; // [rsp+20h] [rbp-50h]
  int v28; // [rsp+30h] [rbp-40h]
  char Str1[40]; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_DWORD *)(a3 + 8) != 5 || *(_DWORD *)(a3 + 12) != 1 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140067F28((__int64)off_140168120->AttachedDevice, 0xEu, (__int64)&unk_1401552B8, MEMORY[8], MEMORY[0xC]);
    v8 = 1;
    LOBYTE(v9) = MEMORY[8];
    v27 = MEMORY[0xC];
    goto LABEL_8;
  }
  v6 = *(_QWORD *)(a3 + 16);
  v7 = *(_DWORD *)(v6 + 8);
  if ( v7 == 5 )
  {
    v28 = 0;
    v11 = 0;
    v12 = *(__int64 **)(v6 + 16);
    while ( 1 )
    {
      if ( v11 >= *(_DWORD *)(v6 + 12) || !v12 )
        return 0;
      if ( *((_DWORD *)v12 + 2) == 6 && *((_DWORD *)v12 + 3) == 2 )
      {
        v13 = (__int64 *)v12[2];
        if ( v13 )
        {
          v14 = *((_DWORD *)v13 + 3);
          v15 = *v13;
          if ( v14 <= 0x20 && *(_DWORD *)(v15 + 12) <= 4u )
            break;
        }
      }
LABEL_71:
      v12 = (__int64 *)*v12;
      v28 = ++v11;
    }
    v16 = (const void *)sub_14013AC08(v12[2], a2, v14);
    memmove(Str1, v16, v17);
    v18 = *((unsigned int *)v13 + 3);
    if ( v18 >= 0x21 )
      _report_rangecheckfailure();
    Str1[v18] = 0;
    if ( !stricmp(Str1, "MaxComPacketSize") )
    {
      v19 = *(_DWORD *)(v15 + 16);
      a2 = 0x10000LL;
      *a4 = v19;
      v20 = 0x10000;
      if ( v19 < 0x10000 )
        v20 = v19;
      *(_DWORD *)(a1 + 44) = v20;
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 4u )
      {
        LODWORD(v26) = v20;
        sub_140067F28((__int64)off_140168120->AttachedDevice, 0x10u, (__int64)&unk_1401552B8, *a4, v26);
      }
      goto LABEL_70;
    }
    if ( !stricmp(Str1, "MaxResponseComPacketSize") )
    {
      v21 = *(_DWORD *)(v15 + 16);
      a4[1] = v21;
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 4u )
        sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x11u, (__int64)&unk_1401552B8, v21);
      if ( *a4
        && a4[1] > (unsigned int)*a4
        && off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && BYTE1(off_140168120->Timer) >= 3u )
      {
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x12u, (__int64)&unk_1401552B8);
      }
      goto LABEL_70;
    }
    if ( !stricmp(Str1, "MaxPacketSize") )
    {
      v22 = *(_DWORD *)(v15 + 16);
      a4[2] = v22;
      v23 = off_140168120;
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 4u )
        goto LABEL_70;
      v24 = 19;
    }
    else if ( !stricmp(Str1, "MaxIndTokenSize") )
    {
      v22 = *(_DWORD *)(v15 + 16);
      a4[3] = v22;
      v23 = off_140168120;
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 4u )
        goto LABEL_70;
      v24 = 20;
    }
    else if ( !stricmp(Str1, "MaxPackets") )
    {
      v22 = *(_DWORD *)(v15 + 16);
      a4[4] = v22;
      v23 = off_140168120;
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 4u )
        goto LABEL_70;
      v24 = 21;
    }
    else if ( !stricmp(Str1, "MaxSubpackets") )
    {
      v22 = *(_DWORD *)(v15 + 16);
      a4[5] = v22;
      v23 = off_140168120;
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 4u )
        goto LABEL_70;
      v24 = 22;
    }
    else if ( !stricmp(Str1, "MaxMethods") )
    {
      v22 = *(_DWORD *)(v15 + 16);
      a4[6] = v22;
      v23 = off_140168120;
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 4u )
        goto LABEL_70;
      v24 = 23;
    }
    else if ( !stricmp(Str1, "MaxSessions") )
    {
      v22 = *(_DWORD *)(v15 + 16);
      a4[7] = v22;
      v23 = off_140168120;
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 4u )
        goto LABEL_70;
      v24 = 24;
    }
    else if ( !stricmp(Str1, "MaxAuthentications") )
    {
      v22 = *(_DWORD *)(v15 + 16);
      a4[8] = v22;
      v23 = off_140168120;
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 4u )
        goto LABEL_70;
      v24 = 25;
    }
    else if ( !stricmp(Str1, "MaxTransactionLimit") )
    {
      v22 = *(_DWORD *)(v15 + 16);
      a4[9] = v22;
      v23 = off_140168120;
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 4u )
        goto LABEL_70;
      v24 = 26;
    }
    else
    {
      if ( stricmp(Str1, "DefSessionTimeout") )
        goto LABEL_70;
      v22 = *(_DWORD *)(v15 + 16);
      a4[10] = v22;
      v23 = off_140168120;
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 4u )
        goto LABEL_70;
      v24 = 27;
    }
    sub_140055BD4((__int64)v23->AttachedDevice, v24, (__int64)&unk_1401552B8, v22);
LABEL_70:
    v11 = v28;
    goto LABEL_71;
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
    sub_140067F28((__int64)off_140168120->AttachedDevice, 0xFu, (__int64)&unk_1401552B8, v7, *(_DWORD *)(v6 + 12));
  v8 = 2;
  v9 = *(_DWORD *)(v6 + 8);
  v27 = *(unsigned int *)(v6 + 12);
LABEL_8:
  v10 = -1073741435;
  sub_140085D5C(*(int **)a1, "ErrInvalidTPerProp", v8, v9, v27, 0LL);
  return v10;
}
