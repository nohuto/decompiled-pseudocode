/*
 * XREFs of ?GetSwapChainRealizationInfo@CFlipExBuffer@@UEBAJ_NPEAIPEAUCSM_REALIZATION_INFO@@@Z @ 0x14004EA10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DxgkGetSharedAllocationObjectType @ 0x1403EA390 (DxgkGetSharedAllocationObjectType.c)
 */

__int64 __fastcall CFlipExBuffer::GetSwapChainRealizationInfo(
        CFlipExBuffer *this,
        char a2,
        unsigned int *a3,
        struct CSM_REALIZATION_INFO *a4)
{
  NTSTATUS v4; // ebx
  unsigned int v8; // eax
  __int64 v9; // r14
  __int64 **v10; // rcx
  __int64 *i; // rdi
  __int64 v12; // r15
  __int64 v13; // r12
  int v14; // eax
  __int64 Win32kImportTable; // rax
  KPROCESSOR_MODE AccessMode; // bl
  struct _OBJECT_TYPE *ObjectType; // rax
  void *v18; // rax
  HANDLE *v20; // rsi
  void *Handle; // [rsp+40h] [rbp-48h] BYREF
  char v22; // [rsp+98h] [rbp+10h]
  ACCESS_MASK DesiredAccess; // [rsp+A8h] [rbp+20h]

  v22 = a2;
  v4 = 0;
  if ( a4 )
  {
    v8 = *((_DWORD *)this + 72);
    if ( v8 > *a3 )
      return (unsigned int)-1073741811;
    if ( v8 )
    {
      v9 = 0LL;
      v10 = (__int64 **)((char *)this + 272);
      for ( i = *v10; i != (__int64 *)v10; i = (__int64 *)*i )
      {
        v12 = 5 * v9;
        *((_DWORD *)a4 + 2 * v12) = *((_DWORD *)i + 4);
        v13 = (unsigned int)v9;
        *(_OWORD *)((char *)a4 + 8 * v12) = *((_OWORD *)i + 1);
        *(_OWORD *)((char *)a4 + 8 * v12 + 16) = *((_OWORD *)i + 2);
        *((_QWORD *)a4 + v12 + 4) = i[6];
        if ( a2 )
        {
          v18 = (void *)i[7];
        }
        else
        {
          if ( (*((_DWORD *)this + 46) & 0x100) != 0 || (DesiredAccess = 983040, *((_DWORD *)this + 72) == 1) )
            DesiredAccess = 983041;
          v14 = *((_DWORD *)i + 4);
          Handle = 0LL;
          if ( v14 != 2 && (unsigned int)(v14 - 3) > 1 )
          {
            v4 = -1073741811;
LABEL_16:
            if ( (_DWORD)v9 )
            {
              v20 = (HANDLE *)((char *)a4 + 8);
              do
              {
                ObCloseHandle(*v20, 1);
                v20 += 5;
                --v13;
              }
              while ( v13 );
            }
            return (unsigned int)v4;
          }
          Win32kImportTable = DxgkGetWin32kImportTable();
          AccessMode = (*(unsigned int (**)(void))(Win32kImportTable + 608))() == 0;
          ObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
          v4 = ObOpenObjectByPointer((PVOID)i[7], 0, 0LL, DesiredAccess, ObjectType, AccessMode, &Handle);
          if ( v4 < 0 )
            goto LABEL_16;
          v18 = Handle;
          v10 = (__int64 **)((char *)this + 272);
          a2 = v22;
        }
        *((_QWORD *)a4 + 5 * v9 + 1) = v18;
        v9 = (unsigned int)(v9 + 1);
      }
    }
  }
  *a3 = *((_DWORD *)this + 72);
  return (unsigned int)v4;
}
