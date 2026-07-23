/*
 * XREFs of IopGraftName @ 0x140934204
 * Callers:
 *     IopSymlinkProcessReparse @ 0x14093415C (IopSymlinkProcessReparse.c)
 * Callees:
 *     IopSymlinkRemoveECP @ 0x14046C060 (IopSymlinkRemoveECP.c)
 *     IopSymlinkGetECP @ 0x14047CDCC (IopSymlinkGetECP.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x1404A8D40 (IopSymlinkGetMostRecentlyUsedName.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     IopGetFileInformation @ 0x1409212D0 (IopGetFileInformation.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140933710 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x140933A38 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140933C40 (IopSymlinkAllocateAndAddECP.c)
 *     IopCopyOverNewPath @ 0x140934598 (IopCopyOverNewPath.c)
 *     IopSymlinkRememberJunction @ 0x14093469C (IopSymlinkRememberJunction.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x1409347A0 (IopSymlinkGetRelatedMountPoint.c)
 *     IopSymlinkUpdateECP @ 0x1409347F8 (IopSymlinkUpdateECP.c)
 *     IopSymlinkApplyToOpenedName @ 0x1409353A0 (IopSymlinkApplyToOpenedName.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopGraftName(PIRP Irp, __int64 a2, int *a3)
{
  struct _ECP_LIST *UserBuffer; // rcx
  unsigned int v6; // r14d
  ULONG Flags; // eax
  const void **v8; // r12
  int v9; // eax
  signed int v10; // edi
  _WORD *v11; // r15
  NTSTATUS v12; // ebx
  ULONG_PTR Information; // rax
  __int64 v14; // r10
  int v15; // eax
  __int16 v16; // r8
  __int64 v17; // rdx
  __int64 RelatedMountPoint; // rax
  unsigned __int16 v19; // r8
  unsigned int v20; // ecx
  unsigned int v21; // r14d
  char *v22; // rax
  char *v23; // rdi
  __int16 v24; // r14
  NTSTATUS updated; // eax
  __int64 v26; // rax
  _QWORD *FileObjectExtension; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  unsigned int v30; // ebx
  __int64 Pool2; // rax
  int v32; // eax
  ULONG v33; // ebx
  struct _IRP *v34; // rax
  struct _IRP *v35; // rdi
  int FileInformation; // eax
  unsigned int v37; // ecx
  struct _IRP *v38; // r14
  char *v39; // rbx
  char *v40; // rdx
  int v41; // ebx
  PVOID v42; // r14
  unsigned int v43; // r15d
  __int16 v44; // dx
  __int16 v45; // [rsp+50h] [rbp-29h]
  struct _FILE_OBJECT *Object; // [rsp+58h] [rbp-21h]
  PVOID EcpContext; // [rsp+60h] [rbp-19h] BYREF
  __int64 v48; // [rsp+68h] [rbp-11h]
  struct _IRP *v49; // [rsp+70h] [rbp-9h]
  struct _ECP_LIST *v50; // [rsp+78h] [rbp-1h]
  PVOID P; // [rsp+80h] [rbp+7h]
  unsigned __int16 *v52; // [rsp+88h] [rbp+Fh]
  char v53; // [rsp+E0h] [rbp+67h]
  unsigned __int16 v54; // [rsp+E0h] [rbp+67h]
  PVOID v56; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v57; // [rsp+F8h] [rbp+7Fh] BYREF

  UserBuffer = 0LL;
  Object = *(struct _FILE_OBJECT **)(a2 + 64);
  LODWORD(v57) = 0;
  v6 = 0;
  LOWORD(v56) = 0;
  Flags = Irp->Flags;
  v8 = 0LL;
  v48 = 0LL;
  EcpContext = 0LL;
  v53 = 0;
  P = 0LL;
  v49 = 0LL;
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
  v52 = (unsigned __int16 *)(a2 + 88);
  if ( *(_WORD *)(a2 + 88) )
  {
    v12 = v10;
    if ( v10 >= 0 )
    {
      if ( v15 == -1610612733 )
      {
        v16 = *((_WORD *)a3 + 5);
        v17 = *((unsigned __int16 *)a3 + 3);
        v48 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 16;
        LOWORD(v56) = v16;
        goto LABEL_20;
      }
      if ( v15 != -1610612724 )
      {
        v12 = -1073741194;
        goto LABEL_16;
      }
      v26 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 20;
      LOWORD(v56) = *((_WORD *)a3 + 5);
      v48 = v26;
      if ( (a3[4] & 1) != 0 )
      {
        v53 = 1;
        if ( Object )
        {
          FileObjectExtension = Object->FileObjectExtension;
          if ( !FileObjectExtension || !FileObjectExtension[6] )
          {
            v30 = 256;
            while ( 1 )
            {
              Pool2 = ExAllocatePool2(0x100uLL);
              v8 = (const void **)Pool2;
              if ( !Pool2 )
              {
                v12 = -1073741670;
                goto LABEL_16;
              }
              v32 = ObQueryNameStringMode(*(_QWORD *)(a2 + 8), Pool2, v30, &v57, 0);
              LOBYTE(v14) = 0;
              v12 = v32;
              if ( v32 >= 0 )
                break;
              if ( v32 != -2147483643 )
                goto LABEL_34;
              v30 = v57;
              if ( (unsigned int)v57 >= 0xFFFF )
              {
LABEL_73:
                v12 = -1073741562;
                goto LABEL_66;
              }
              ExFreePoolWithTag(v8, 0);
            }
            v33 = 256;
            v6 = *(unsigned __int16 *)v8 + *v52 - *((unsigned __int16 *)a3 + 3);
            while ( 1 )
            {
              v34 = (struct _IRP *)ExAllocatePool2(0x100uLL);
              LOBYTE(v14) = 0;
              P = v34;
              v35 = v34;
              if ( !v34 )
              {
                v12 = -1073741670;
                goto LABEL_34;
              }
              v49 = v34;
              FileInformation = IopGetFileInformation(Object, v33, 9u, v34, &v57);
              LOBYTE(v14) = 0;
              v12 = FileInformation;
              if ( FileInformation >= 0 )
                break;
              if ( FileInformation != -2147483643 )
                goto LABEL_34;
              v33 = *(_DWORD *)&v35->Type + 8;
              if ( v33 >= 0xFFFF )
                goto LABEL_73;
              ExFreePoolWithTag(v35, 0);
            }
            v37 = v6 + *(_DWORD *)&v35->Type;
            if ( v37 < v6 )
            {
              v12 = -1073741675;
              goto LABEL_66;
            }
            v6 += *(_DWORD *)&v35->Type;
            if ( v37 >= 0xFFFF )
              goto LABEL_73;
            v17 = *((unsigned __int16 *)a3 + 3);
LABEL_20:
            RelatedMountPoint = IopSymlinkGetRelatedMountPoint(v11, v17);
            if ( !RelatedMountPoint )
              RelatedMountPoint = IopSymlinkGetMostRecentlyUsedName((__int64)v11);
            v20 = *(unsigned __int16 *)(RelatedMountPoint + 16);
            if ( v53 != (_BYTE)v14 )
            {
              if ( Object && ((v28 = Object->FileObjectExtension) == 0LL || v28[6] == v14) )
              {
                v6 += v20;
              }
              else if ( v6 <= v20 )
              {
                v6 = v20;
              }
              v6 += 2;
            }
            v21 = v6 + v19 + *((unsigned __int16 *)a3 + 3) + 4;
            if ( v21 >= 0xFFFF )
            {
              v12 = -1073741562;
            }
            else
            {
              v22 = (char *)ExAllocatePool2(0x100uLL);
              LOBYTE(v14) = 0;
              v23 = v22;
              if ( !v22 )
                v12 = -1073741670;
              v24 = v21 - 2;
              v45 = v24;
              if ( v12 >= 0 )
              {
                if ( !v53 )
                {
                  v12 = IopCopyOverNewPath(v22, *((_WORD *)a3 + 3));
                  if ( v12 < 0 )
                  {
                    ExFreePoolWithTag(v23, 0);
                    goto LABEL_16;
                  }
                  if ( *a3 == -1610612733 )
                    updated = IopSymlinkRememberJunction(*((unsigned __int16 *)a3 + 3), a2, Irp, v11);
                  else
                    updated = IopSymlinkUpdateECP(Irp, 0, v11[1] & 0xFFFE);
                  v12 = updated;
                  goto LABEL_32;
                }
                v56 = 0LL;
                if ( !Object )
                  goto LABEL_99;
                v29 = Object->FileObjectExtension;
                if ( v29 )
                {
                  if ( v29[6] )
                    goto LABEL_99;
                }
                memmove(v23, v8[1], *(unsigned __int16 *)v8);
                v38 = v49;
                v39 = &v23[2 * ((unsigned __int64)*(unsigned __int16 *)v8 >> 1)];
                memmove(v39, &v49->Size + 1, *(unsigned int *)&v49->Type);
                v40 = &v39[2 * ((unsigned __int64)*(unsigned int *)&v38->Type >> 1)];
                if ( **(_WORD **)(a2 + 96) != 92 && *((_WORD *)v40 - 1) != 92 )
                {
                  *(_WORD *)v40 = 92;
                  LOWORD(v40) = (_WORD)v40 + 2;
                }
                v41 = (unsigned __int16)((_WORD)v40 - (_WORD)v23);
                v54 = (_WORD)v40 - (_WORD)v23;
                IopSymlinkRemoveECP(v50, &EcpContext);
                v42 = EcpContext;
                v43 = v41 + *((unsigned __int16 *)EcpContext + 8) + 2;
                if ( v43 < 0xFFFF )
                {
                  v12 = IopSymlinkAllocateAndAddECP(Irp, &v56, v41 + *((_WORD *)EcpContext + 8) + 2);
                  if ( v12 >= 0 )
                  {
                    v44 = v43 + 32;
                    v11 = v56;
                    IopSymlinkInitializeSymlinkInfo(
                      (__int64)v56,
                      v44,
                      *((const void **)v42 + 3),
                      *((_WORD *)v42 + 8),
                      *(_WORD *)v42,
                      v23,
                      v54,
                      *(_WORD *)v8,
                      *((_WORD *)v42 + 1),
                      *((_QWORD *)v42 + 1));
                    FsRtlFreeExtraCreateParameter(v42);
                    v24 = v45;
LABEL_99:
                    if ( !IopSymlinkGetRelatedMountPoint(v11, *((unsigned __int16 *)a3 + 3)) )
                      IopSymlinkGetMostRecentlyUsedName((__int64)v11);
                    v12 = IopSymlinkApplyToOpenedName(a2, v23, v24);
                    goto LABEL_38;
                  }
                }
                else
                {
                  v12 = -1073741562;
                }
                ExFreePoolWithTag(v23, 0);
LABEL_38:
                if ( v8 )
LABEL_66:
                  ExFreePoolWithTag(v8, 0);
                if ( P )
                  ExFreePoolWithTag(P, 0);
                goto LABEL_32;
              }
            }
LABEL_37:
            if ( v53 == (_BYTE)v14 )
            {
LABEL_32:
              if ( v12 >= 0 )
                v12 = 260;
              goto LABEL_16;
            }
            goto LABEL_38;
          }
        }
      }
    }
LABEL_34:
    v17 = *((unsigned __int16 *)a3 + 3);
    if ( v12 < 0 )
      goto LABEL_37;
    goto LABEL_20;
  }
LABEL_16:
  Irp->IoStatus.Status = v12;
}
