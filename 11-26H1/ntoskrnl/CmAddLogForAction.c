/*
 * XREFs of CmAddLogForAction @ 0x1408B3454
 * Callers:
 *     CmSetKeyFlags @ 0x1408B6EC8 (CmSetKeyFlags.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1408C4CC8 (CmpSetSecurityDescriptorInfo.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmSetLastWriteTimeKey @ 0x140B56450 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpTransWriteLog @ 0x1408B3A74 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x1408B3F10 (HvBufferCheckSum.c)
 *     CmpCopyCompressedName @ 0x1408C82E0 (CmpCopyCompressedName.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpGetValueData @ 0x140942400 (CmpGetValueData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, ULONG a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  size_t v4; // r13
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rcx
  const void **v10; // r12
  int v11; // edx
  int v12; // ebx
  ULONG_PTR v13; // rcx
  __int64 CellPaged; // rax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned __int16 v17; // cx
  unsigned int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // ebx
  __int64 Pool2; // rax
  int v22; // edx
  int v23; // eax
  char *v24; // rbx
  size_t v25; // r8
  void *v26; // rdx
  bool v27; // zf
  __int64 v28; // rcx
  __int64 v29; // rdx
  BOOLEAN v30; // al
  __int64 v31; // r13
  int v32; // ebx
  CLFS_INFORMATION *v33; // rax
  CLFS_INFORMATION *v34; // r15
  __int64 v35; // rcx
  __int64 CellFlat; // rax
  unsigned int v38; // edx
  size_t v39; // r8
  void *v40; // rcx
  __int64 v41; // rdx
  int v42; // ebx
  unsigned int v43[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v44; // [rsp+48h] [rbp-30h] BYREF
  void *Src; // [rsp+50h] [rbp-28h] BYREF
  CLFS_LSN v46; // [rsp+58h] [rbp-20h] BYREF
  __int64 v47; // [rsp+60h] [rbp-18h]
  unsigned int v48; // [rsp+C0h] [rbp+48h]
  ULONG pcbInfoBuffer; // [rsp+C8h] [rbp+50h] BYREF
  size_t Size; // [rsp+D0h] [rbp+58h]
  unsigned int v51; // [rsp+D8h] [rbp+60h]

  pcbInfoBuffer = a2;
  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  v46.ullOffset = 0LL;
  v43[0] = -1;
  v4 = 0LL;
  v6 = *(_DWORD *)(v2 + 48);
  v7 = 0LL;
  v43[1] = 0;
  v8 = 0LL;
  v51 = 0;
  LODWORD(Size) = 0;
  v48 = 0;
  if ( (v6 & 0x80u) != 0 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 48);
  v47 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 4160LL);
  if ( !*(_QWORD *)(v47 + 96) || !*(_QWORD *)(v2 + 56) || *(_DWORD *)(a1 + 68) == 13 )
    return 0LL;
  v10 = (const void **)CmpConstructName(v9);
  if ( v10 )
  {
    v11 = *(_DWORD *)(a1 + 68);
    if ( !v11 || v11 == 2 )
    {
      v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL) + 24LL);
LABEL_62:
      v18 = 64;
      v3 = v42 + 64;
      goto LABEL_20;
    }
    if ( v11 != 4 && v11 != 5 && v11 != 6 )
    {
      if ( v11 == 7 || v11 == 8 )
      {
        v3 = 56;
        goto LABEL_21;
      }
      if ( v11 != 9 )
      {
LABEL_21:
        v19 = *(unsigned __int16 *)v10;
        v20 = v19 + v3;
        if ( v20 < v19 )
        {
          v32 = -1073741562;
          goto LABEL_41;
        }
        Pool2 = ExAllocatePool2(0x100uLL);
        v7 = Pool2;
        if ( Pool2 )
        {
          *(_DWORD *)(Pool2 + 4) = v20;
          *(_DWORD *)(Pool2 + 8) = 1;
          *(_OWORD *)(Pool2 + 16) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 88LL);
          *(_WORD *)(Pool2 + 32) = *(_WORD *)v10;
          *(_WORD *)(Pool2 + 34) = *((_WORD *)v10 + 1);
          v22 = *(_DWORD *)(a1 + 68);
          if ( !v22 || v22 == 2 )
          {
            *(_DWORD *)(Pool2 + 12) = (v22 != 0) + 1;
            *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 72);
            *(_QWORD *)(Pool2 + 40) = Pool2 + 64;
            memmove((void *)(Pool2 + 64), v10[1], *(unsigned __int16 *)v10);
            v40 = (void *)(v7 + 64 + *(unsigned __int16 *)v10);
            *(_QWORD *)(v7 + 56) = v40;
            v41 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL);
            v39 = *(unsigned int *)(v41 + 24);
LABEL_68:
            memmove(v40, (const void *)(v41 + 32), v39);
            *(_QWORD *)(v7 + 56) = 0LL;
            goto LABEL_36;
          }
          if ( v22 != 4 && v22 != 5 && v22 != 6 )
          {
            switch ( v22 )
            {
              case 7:
                *(_DWORD *)(Pool2 + 12) = 6;
                *(_QWORD *)(Pool2 + 40) = Pool2 + 56;
                memmove((void *)(Pool2 + 56), v10[1], *(unsigned __int16 *)v10);
                *(_DWORD *)(v7 + 48) = *(_DWORD *)(a1 + 88);
                break;
              case 8:
                *(_DWORD *)(Pool2 + 12) = 7;
                *(_QWORD *)(Pool2 + 40) = Pool2 + 56;
                memmove((void *)(Pool2 + 56), v10[1], *(unsigned __int16 *)v10);
                *(_QWORD *)(v7 + 48) = *(_QWORD *)(a1 + 88);
                break;
              case 9:
                *(_DWORD *)(Pool2 + 12) = *(_BYTE *)(a1 + 100) != 0 ? 10 : 8;
                *(_QWORD *)(Pool2 + 40) = Pool2 + 64;
                memmove((void *)(Pool2 + 64), v10[1], *(unsigned __int16 *)v10);
                v38 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
                *(_DWORD *)(v7 + 48) = v38;
                v39 = v38;
                v40 = (void *)(v7 + 64 + *(unsigned __int16 *)v10);
                *(_QWORD *)(v7 + 56) = v40;
                v41 = *(_QWORD *)(a1 + 88);
                goto LABEL_68;
              default:
                break;
            }
LABEL_36:
            v29 = *(unsigned int *)(v7 + 4);
            *(_QWORD *)(v7 + 40) = 0LL;
            *(_DWORD *)v7 = HvBufferCheckSum(v7, v29);
            v30 = ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL));
            v31 = v47;
            v32 = CmpTransWriteLog(v47, v7, *(_DWORD *)(v7 + 4), v30 != 0 ? 2 : 0, &v46);
            if ( v32 >= 0 && ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL)) )
              *(CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL) = v46;
            pcbInfoBuffer = 120;
            v33 = (CLFS_INFORMATION *)ExAllocatePool2(0x100uLL);
            v34 = v33;
            if ( v33 )
            {
              ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(v31 + 88), v33, &pcbInfoBuffer);
              ExFreePoolWithTag(v34, 0);
            }
LABEL_41:
            if ( !v8 )
            {
LABEL_44:
              if ( v7 )
                ExFreePoolWithTag((PVOID)v7, 0);
              goto LABEL_46;
            }
LABEL_42:
            v35 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
            if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v35, v43);
            else
              HvpReleaseCellPaged(v35, v43);
            goto LABEL_44;
          }
          v44 = 0xFFFFFFFFLL;
          Src = 0LL;
          LOBYTE(pcbInfoBuffer) = 0;
          if ( v22 == 4 )
            *(_DWORD *)(Pool2 + 12) = 3;
          else
            *(_DWORD *)(Pool2 + 12) = (v22 != 5) + 4;
          v23 = *(_DWORD *)(v8 + 12);
          *(_QWORD *)(v7 + 40) = v7 + 80;
          *(_DWORD *)(v7 + 64) = v23;
          memmove((void *)(v7 + 80), v10[1], *(unsigned __int16 *)v10);
          v24 = (char *)(*(unsigned __int16 *)v10 + v7 + 80);
          *(_QWORD *)(v7 + 56) = v24;
          if ( (*(_BYTE *)(v8 + 16) & 1) != 0 )
            CmpCopyCompressedName(v24, v48, v8 + 20, *(unsigned __int16 *)(v8 + 2));
          else
            memmove(v24, (const void *)(v8 + 20), v4);
          *(_QWORD *)(v7 + 56) = 0LL;
          *(_WORD *)(v7 + 50) = v48;
          *(_WORD *)(v7 + 48) = v48;
          if ( *(_DWORD *)(a1 + 68) == 6 )
          {
            *(_DWORD *)(v7 + 68) = 0;
            *(_QWORD *)(v7 + 72) = 0LL;
            goto LABEL_36;
          }
          *(_DWORD *)(v7 + 68) = v51;
          if ( (unsigned __int8)CmpGetValueData(
                                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                                  (__int64)&Src,
                                  (__int64)&pcbInfoBuffer,
                                  (__int64)&v44) )
          {
            v25 = (unsigned int)Size;
            v26 = Src;
            *(_QWORD *)(v7 + 72) = &v24[v4];
            memmove(&v24[v4], v26, v25);
            v27 = (_BYTE)pcbInfoBuffer == 1;
            *(_QWORD *)(v7 + 72) = 0LL;
            if ( v27 )
            {
              ExFreePoolWithTag(Src, 0);
            }
            else
            {
              v28 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
              if ( (*(_BYTE *)(v28 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v28, &v44);
              else
                HvpReleaseCellPaged(v28, &v44);
            }
            goto LABEL_36;
          }
        }
        v32 = -1073741670;
        goto LABEL_41;
      }
      v42 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
      goto LABEL_62;
    }
    v12 = 80;
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
    if ( (unsigned int)(v11 - 4) > 1 )
    {
      if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v13, *(_DWORD *)(a1 + 88), v43);
      else
        CellFlat = HvpGetCellPaged(v13);
      v8 = CellFlat;
      if ( CellFlat )
      {
LABEL_17:
        v17 = 2 * *(_WORD *)(v8 + 2);
        if ( (*(_BYTE *)(v8 + 16) & 1) == 0 )
          v17 = *(_WORD *)(v8 + 2);
        v18 = v12;
        v4 = v17;
        v48 = v17;
        v3 = v17 + v12;
LABEL_20:
        if ( v3 < v18 )
        {
          v32 = -1073741675;
          goto LABEL_41;
        }
        goto LABEL_21;
      }
    }
    else
    {
      if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v13, *(_DWORD *)(a1 + 92), v43);
      else
        CellPaged = HvpGetCellPaged(v13);
      v8 = CellPaged;
      if ( CellPaged )
      {
        v15 = *(_DWORD *)(CellPaged + 4);
        v16 = v15 + 0x80000000;
        if ( v15 < 0x80000000 )
          v16 = v15;
        v51 = v16;
        LODWORD(Size) = v16;
        v12 = v16 + 80;
        if ( v16 >= 0xFFFFFFB0 )
        {
          v32 = -1073741675;
          goto LABEL_42;
        }
        goto LABEL_17;
      }
    }
    v32 = -1073741670;
LABEL_46:
    CmpFreeTransientPoolWithTag(v10, 0x624E4D43u);
    return (unsigned int)v32;
  }
  return 3221225626LL;
}
