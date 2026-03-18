/*
 * XREFs of IopGraftName @ 0x140904274
 * Callers:
 *     IopSymlinkProcessReparse @ 0x1409041CC (IopSymlinkProcessReparse.c)
 * Callees:
 *     IopSymlinkRemoveECP @ 0x1404728E0 (IopSymlinkRemoveECP.c)
 *     IopSymlinkGetECP @ 0x14048345C (IopSymlinkGetECP.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x1404AF6B0 (IopSymlinkGetMostRecentlyUsedName.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140903780 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x140903AA8 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140903CB0 (IopSymlinkAllocateAndAddECP.c)
 *     IopCopyOverNewPath @ 0x14090460C (IopCopyOverNewPath.c)
 *     IopSymlinkRememberJunction @ 0x140904710 (IopSymlinkRememberJunction.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x140904814 (IopSymlinkGetRelatedMountPoint.c)
 *     IopSymlinkUpdateECP @ 0x140904868 (IopSymlinkUpdateECP.c)
 *     IopSymlinkApplyToOpenedName @ 0x140905410 (IopSymlinkApplyToOpenedName.c)
 *     IopGetFileInformation @ 0x1409FC6D0 (IopGetFileInformation.c)
 *     ObQueryNameStringMode @ 0x1409FDA40 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopGraftName(PIRP Irp, __int64 a2, int *a3)
{
  unsigned int v5; // r14d
  ULONG Flags; // eax
  const void **v7; // r12
  struct _ECP_LIST *UserBuffer; // rcx
  int v9; // eax
  signed int v10; // edi
  _WORD *v11; // r15
  NTSTATUS v12; // ebx
  ULONG_PTR Information; // rax
  __int64 v14; // r10
  int v15; // eax
  __int16 v16; // r8
  __int64 v17; // rdx
  _QWORD *v18; // rdi
  __int64 RelatedMountPoint; // rax
  unsigned __int16 v20; // r8
  unsigned int v21; // ecx
  unsigned int v22; // r14d
  char *v23; // rax
  char *v24; // rdi
  __int16 v25; // r14
  NTSTATUS updated; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // ebx
  __int64 Pool2; // rax
  int NameStringMode; // eax
  unsigned int *v34; // rax
  int FileInformation; // eax
  unsigned int v36; // ecx
  unsigned int *v37; // r14
  char *v38; // rbx
  char *v39; // rdx
  int v40; // ebx
  PVOID v41; // r14
  unsigned int v42; // r15d
  __int16 v43; // dx
  __int16 v44; // [rsp+50h] [rbp-29h]
  _QWORD *Object; // [rsp+58h] [rbp-21h]
  PVOID EcpContext; // [rsp+60h] [rbp-19h] BYREF
  PVOID P; // [rsp+68h] [rbp-11h]
  unsigned int *v48; // [rsp+70h] [rbp-9h]
  __int64 v49; // [rsp+78h] [rbp-1h]
  struct _ECP_LIST *v50; // [rsp+80h] [rbp+7h]
  unsigned __int16 *v51; // [rsp+88h] [rbp+Fh]
  char v52; // [rsp+E0h] [rbp+67h]
  unsigned __int16 v53; // [rsp+E0h] [rbp+67h]
  PVOID v55; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v56; // [rsp+F8h] [rbp+7Fh] BYREF

  Object = *(_QWORD **)(a2 + 64);
  LODWORD(v56) = 0;
  v5 = 0;
  LOWORD(v55) = 0;
  Flags = Irp->Flags;
  v7 = 0LL;
  v49 = 0LL;
  UserBuffer = 0LL;
  EcpContext = 0LL;
  v52 = 0;
  P = 0LL;
  v48 = 0LL;
  v50 = 0LL;
  v9 = Flags & 0x80;
  if ( v9 )
  {
    UserBuffer = (struct _ECP_LIST *)Irp->UserBuffer;
    v50 = UserBuffer;
  }
  v10 = v9 == 0 ? 0xC000000D : 0;
  IopSymlinkGetECP(UserBuffer, &EcpContext);
  v11 = EcpContext;
  v12 = -1073741192;
  *((_WORD *)EcpContext + 1) |= 2u;
  Information = Irp->IoStatus.Information;
  if ( Irp->IoStatus.Status != 260 )
    v10 = -1073741192;
  if ( Information != 2684354563 && Information != 2684354572 && Information != 2684354585 )
    v10 = -1073741192;
  LOBYTE(v14) = 0;
  if ( !Irp->Tail.Overlay.AuxiliaryBuffer )
    v10 = -1073741192;
  if ( !a3 )
    v10 = -1073741192;
  if ( *((_WORD *)a3 + 3) >= 0x4000u )
    v10 = -1073741192;
  v15 = *a3;
  if ( *((_WORD *)a3 + 2) >= 0x4000u )
    v10 = -1073741192;
  if ( v15 != -1610612733 && v15 != -1610612724 && v15 != -1610612711 )
    v10 = -1073741192;
  v51 = (unsigned __int16 *)(a2 + 88);
  if ( *(_WORD *)(a2 + 88) )
  {
    v12 = v10;
    if ( v10 >= 0 )
    {
      if ( v15 == -1610612733 )
      {
        v16 = *((_WORD *)a3 + 5);
        v17 = *((unsigned __int16 *)a3 + 3);
        v49 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 16;
        LOWORD(v55) = v16;
LABEL_20:
        v18 = Object;
        goto LABEL_21;
      }
      if ( v15 != -1610612724 )
      {
        v12 = -1073741194;
        goto LABEL_16;
      }
      v27 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 20;
      LOWORD(v55) = *((_WORD *)a3 + 5);
      v49 = v27;
      if ( (a3[4] & 1) != 0 )
      {
        v52 = 1;
        if ( Object )
        {
          v28 = Object[26];
          if ( !v28 || !*(_QWORD *)(v28 + 48) )
          {
            v31 = 256;
            while ( 1 )
            {
              Pool2 = ExAllocatePool2(0x100uLL);
              v7 = (const void **)Pool2;
              if ( !Pool2 )
              {
                v12 = -1073741670;
                goto LABEL_16;
              }
              NameStringMode = ObQueryNameStringMode(*(_QWORD *)(a2 + 8), Pool2, v31, (unsigned int)&v56, 0);
              LOBYTE(v14) = 0;
              v12 = NameStringMode;
              if ( NameStringMode >= 0 )
                break;
              if ( NameStringMode != -2147483643 )
                goto LABEL_35;
              v31 = v56;
              if ( (unsigned int)v56 >= 0xFFFF )
              {
LABEL_74:
                v12 = -1073741562;
                goto LABEL_67;
              }
              ExFreePoolWithTag(v7, 0);
            }
            v18 = Object;
            v5 = *(unsigned __int16 *)v7 + *v51 - *((unsigned __int16 *)a3 + 3);
            while ( 1 )
            {
              v34 = (unsigned int *)ExAllocatePool2(0x100uLL);
              LOBYTE(v14) = 0;
              P = v34;
              if ( !v34 )
              {
                v12 = -1073741670;
                goto LABEL_35;
              }
              v48 = v34;
              FileInformation = IopGetFileInformation(Object, (__int64)&v56);
              LOBYTE(v14) = 0;
              v12 = FileInformation;
              if ( FileInformation >= 0 )
                break;
              if ( FileInformation != -2147483643 )
                goto LABEL_35;
              if ( (unsigned int)(*(_DWORD *)P + 8) >= 0xFFFF )
                goto LABEL_74;
              ExFreePoolWithTag(P, 0);
            }
            v36 = v5 + *(_DWORD *)P;
            if ( v36 < v5 )
            {
              v12 = -1073741675;
              goto LABEL_67;
            }
            v5 += *(_DWORD *)P;
            if ( v36 >= 0xFFFF )
              goto LABEL_74;
            v17 = *((unsigned __int16 *)a3 + 3);
LABEL_21:
            RelatedMountPoint = IopSymlinkGetRelatedMountPoint(v11, v17);
            if ( !RelatedMountPoint )
              RelatedMountPoint = IopSymlinkGetMostRecentlyUsedName((__int64)v11);
            v21 = *(unsigned __int16 *)(RelatedMountPoint + 16);
            if ( v52 != (_BYTE)v14 )
            {
              if ( v18 && ((v29 = v18[26]) == 0 || *(_QWORD *)(v29 + 48) == v14) )
              {
                v5 += v21;
              }
              else if ( v5 <= v21 )
              {
                v5 = v21;
              }
              v5 += 2;
            }
            v22 = v5 + v20 + *((unsigned __int16 *)a3 + 3) + 4;
            if ( v22 >= 0xFFFF )
            {
              v12 = -1073741562;
            }
            else
            {
              v23 = (char *)ExAllocatePool2(0x100uLL);
              LOBYTE(v14) = 0;
              v24 = v23;
              if ( !v23 )
                v12 = -1073741670;
              v25 = v22 - 2;
              v44 = v25;
              if ( v12 >= 0 )
              {
                if ( !v52 )
                {
                  v12 = IopCopyOverNewPath(v23, *((_WORD *)a3 + 3));
                  if ( v12 < 0 )
                  {
                    ExFreePoolWithTag(v24, 0);
                    goto LABEL_16;
                  }
                  if ( *a3 == -1610612733 )
                    updated = IopSymlinkRememberJunction(*((unsigned __int16 *)a3 + 3), a2, Irp, v11);
                  else
                    updated = IopSymlinkUpdateECP(Irp, 0, v11[1] & 0xFFFE);
                  v12 = updated;
                  goto LABEL_33;
                }
                v55 = 0LL;
                if ( !Object )
                  goto LABEL_100;
                v30 = Object[26];
                if ( v30 )
                {
                  if ( *(_QWORD *)(v30 + 48) )
                    goto LABEL_100;
                }
                memmove(v24, v7[1], *(unsigned __int16 *)v7);
                v37 = v48;
                v38 = &v24[2 * ((unsigned __int64)*(unsigned __int16 *)v7 >> 1)];
                memmove(v38, v48 + 1, *v48);
                v39 = &v38[2 * ((unsigned __int64)*v37 >> 1)];
                if ( **(_WORD **)(a2 + 96) != 92 && *((_WORD *)v39 - 1) != 92 )
                {
                  *(_WORD *)v39 = 92;
                  LOWORD(v39) = (_WORD)v39 + 2;
                }
                v40 = (unsigned __int16)((_WORD)v39 - (_WORD)v24);
                v53 = (_WORD)v39 - (_WORD)v24;
                IopSymlinkRemoveECP(v50, &EcpContext);
                v41 = EcpContext;
                v42 = v40 + *((unsigned __int16 *)EcpContext + 8) + 2;
                if ( v42 < 0xFFFF )
                {
                  v12 = IopSymlinkAllocateAndAddECP(Irp, &v55, v40 + *((_WORD *)EcpContext + 8) + 2);
                  if ( v12 >= 0 )
                  {
                    v43 = v42 + 32;
                    v11 = v55;
                    IopSymlinkInitializeSymlinkInfo(
                      (__int64)v55,
                      v43,
                      *((const void **)v41 + 3),
                      *((_WORD *)v41 + 8),
                      *(_WORD *)v41,
                      v24,
                      v53,
                      *(_WORD *)v7,
                      *((_WORD *)v41 + 1),
                      *((_QWORD *)v41 + 1));
                    FsRtlFreeExtraCreateParameter(v41);
                    v25 = v44;
LABEL_100:
                    if ( !IopSymlinkGetRelatedMountPoint(v11, *((unsigned __int16 *)a3 + 3)) )
                      IopSymlinkGetMostRecentlyUsedName((__int64)v11);
                    v12 = IopSymlinkApplyToOpenedName(a2, v24, v25);
                    goto LABEL_39;
                  }
                }
                else
                {
                  v12 = -1073741562;
                }
                ExFreePoolWithTag(v24, 0);
LABEL_39:
                if ( v7 )
LABEL_67:
                  ExFreePoolWithTag(v7, 0);
                if ( P )
                  ExFreePoolWithTag(P, 0);
                goto LABEL_33;
              }
            }
LABEL_38:
            if ( v52 == (_BYTE)v14 )
            {
LABEL_33:
              if ( v12 >= 0 )
                v12 = 260;
              goto LABEL_16;
            }
            goto LABEL_39;
          }
        }
      }
    }
LABEL_35:
    v17 = *((unsigned __int16 *)a3 + 3);
    if ( v12 < 0 )
      goto LABEL_38;
    goto LABEL_20;
  }
LABEL_16:
  Irp->IoStatus.Status = v12;
}
