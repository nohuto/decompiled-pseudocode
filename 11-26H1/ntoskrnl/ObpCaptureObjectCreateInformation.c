/*
 * XREFs of ObpCaptureObjectCreateInformation @ 0x14092DF60
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x1408F238C (ObReferenceObjectByNameEx.c)
 *     NtCreateEvent @ 0x1408F5E80 (NtCreateEvent.c)
 *     ObCreateObject @ 0x14090EB60 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x14090F390 (IopAllocRealFileObject.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     CmpCreateKeyBody @ 0x14092BC40 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     SeValidateSecurityQos @ 0x1408F2300 (SeValidateSecurityQos.c)
 *     ObpCaptureObjectName @ 0x1408F8C70 (ObpCaptureObjectName.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SeCaptureSecurityDescriptor @ 0x140901ED0 (SeCaptureSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCaptureObjectCreateInformation(char a1, char a2, void *a3, _OWORD *a4, __int64 a5, int a6)
{
  bool v8; // di
  unsigned int v9; // eax
  unsigned int *v10; // rsi
  unsigned __int16 *v11; // r15
  void *v12; // r14
  int v13; // edi
  void *v14; // rcx
  void *v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int16 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r8
  __int128 v24; // [rsp+40h] [rbp-78h] BYREF
  __int128 v25; // [rsp+50h] [rbp-68h]
  void *v26; // [rsp+60h] [rbp-58h]
  void *Src; // [rsp+68h] [rbp-50h]
  __int64 v28; // [rsp+78h] [rbp-40h]
  void *v29; // [rsp+80h] [rbp-38h]
  void *v30; // [rsp+88h] [rbp-30h]

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  LODWORD(Src) = 0;
  *a4 = 0LL;
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_OWORD *)(a5 + 48) = 0LL;
  if ( !a3 )
    return 0LL;
  *(_BYTE *)(a5 + 16) = a1;
  v8 = 0;
  if ( a1 )
    v8 = KeGetCurrentThread()->PreviousMode != 0;
  if ( v8 )
  {
    if ( ((unsigned __int8)a3 & 7) != 0 )
      goto LABEL_6;
    RtlCopyFromUser(&v24, a3, 0x30uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&v24, a3, 0x30uLL);
  }
  if ( (_DWORD)v24 == 48 )
  {
    *(_QWORD *)(a5 + 8) = *((_QWORD *)&v24 + 1);
    v9 = DWORD2(v25);
    if ( a2 )
      v9 = DWORD2(v25) & 0xFFFFFDFF;
    if ( (v9 & 0xFFFEE00D) != 0 )
    {
      v13 = -1073741811;
    }
    else
    {
      *(_DWORD *)a5 = v9;
      v10 = (unsigned int *)v25;
      v28 = v25;
      v11 = (unsigned __int16 *)v26;
      v29 = v26;
      v12 = Src;
      v30 = Src;
      if ( Src )
      {
        if ( v8 && ((unsigned __int8)Src & 3) != 0 )
LABEL_6:
          ExRaiseDatatypeMisalignment();
        v14 = (void *)(a5 + 48);
        if ( v8 )
          RtlCopyFromUser(v14, Src, 0xCuLL);
        else
          RtlCopyVolatileMemory(v14, Src, 0xCuLL);
      }
      if ( v11 )
      {
        v13 = SeCaptureSecurityDescriptor(v11, a1, 1, 1, (unsigned __int16 **)(a5 + 32));
        if ( v13 < 0 )
        {
          *(_QWORD *)(a5 + 32) = 0LL;
          goto LABEL_29;
        }
        v17 = *(_QWORD *)(a5 + 32);
        v18 = 0;
        if ( *(_BYTE *)v17 == 1 )
        {
          v19 = *(_WORD *)(v17 + 2);
          if ( v19 >= 0 )
          {
            v21 = *(_QWORD *)(v17 + 16);
          }
          else
          {
            v20 = *(unsigned int *)(v17 + 8);
            if ( (_DWORD)v20 )
              v21 = v17 + v20;
            else
              v21 = 0LL;
          }
          if ( (v19 & 4) != 0 )
          {
            if ( v19 < 0 )
            {
              v22 = *(unsigned int *)(v17 + 16);
              if ( (_DWORD)v22 )
                v23 = v17 + v22;
              else
                v23 = 0LL;
            }
            else
            {
              v23 = *(_QWORD *)(v17 + 32);
            }
          }
          else
          {
            v23 = 0LL;
          }
          if ( v21 )
            v18 = (4 * *(unsigned __int8 *)(v21 + 1) + 11) & 0xFFFFFFFC;
          if ( v23 )
            v18 += (*(unsigned __int16 *)(v23 + 2) + 3) & 0xFFFFFFFC;
        }
        *(_DWORD *)(a5 + 28) = v18;
      }
      if ( v12 )
      {
        *(_DWORD *)(a5 + 48) = 12;
        *(_QWORD *)(a5 + 40) = a5 + 48;
        v13 = SeValidateSecurityQos(a5 + 48);
        if ( v13 < 0 )
          goto LABEL_29;
      }
      if ( v10 )
      {
        v13 = ObpCaptureObjectName(a1, v10, (__int64)a4, a6);
        if ( v13 >= 0 )
          return 0LL;
      }
      else
      {
        if ( !*(_QWORD *)(a5 + 8) )
          return 0LL;
        v13 = -1073741773;
      }
    }
  }
  else
  {
    v13 = -1073741811;
  }
LABEL_29:
  v16 = *(void **)(a5 + 32);
  if ( v16 )
  {
    if ( *(_BYTE *)(a5 + 16) <= 1u )
      ExFreePoolWithTag(v16, 0);
    *(_QWORD *)(a5 + 32) = 0LL;
  }
  return (unsigned int)v13;
}
