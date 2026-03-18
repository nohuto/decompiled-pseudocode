/*
 * XREFs of Concat @ 0x140015240
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     ValidateTarget @ 0x140014990 (ValidateTarget.c)
 *     IsCompatableDSDTRevision @ 0x140014C60 (IsCompatableDSDTRevision.c)
 *     ConvertToInteger @ 0x140015028 (ConvertToInteger.c)
 *     ConvertToBuffer @ 0x1400150F8 (ConvertToBuffer.c)
 *     ConvertToString @ 0x140016ABC (ConvertToString.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall Concat(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // ebx
  __int16 *v6; // rax
  __int64 v7; // r13
  char v8; // r9
  volatile signed __int32 *v9; // rcx
  __int64 v10; // r8
  __int16 v11; // dx
  __int64 v12; // rbp
  __int16 v13; // ax
  _OWORD *v14; // rsi
  __int16 v15; // ax
  __int64 v16; // rcx
  unsigned int *v17; // r14
  unsigned int *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edx
  __int64 *v22; // rax
  __int16 v23; // cx
  size_t v24; // r8
  const void *v25; // rdx
  bool v26; // zf
  void *v27; // rcx
  void *v28; // rcx
  int v30; // eax
  __int64 v31; // r9
  const void *ObjectTypeName; // rax
  const void *v33; // r10
  bool v34; // al
  _QWORD *v35; // rdx
  _OWORD v36[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v37; // [rsp+50h] [rbp-48h]
  char v38; // [rsp+A8h] [rbp+10h]
  __int64 v39; // [rsp+B0h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  memset(v36, 0, sizeof(v36));
  v37 = 0LL;
  v39 = 0LL;
  v38 = 0;
  v5 = ValidateArgTypes(a1, v3, 0, "DD");
  if ( v5 )
    return v5;
  v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 135, (__int64)&v39);
  if ( v5 )
    return v5;
  v6 = *(__int16 **)(a2 + 80);
  v7 = v39;
  if ( v6[41] != 128 )
  {
    v8 = 0;
    v9 = 0LL;
    v10 = 2LL;
    do
    {
      v11 = *v6;
      if ( (*v6 & 1) != 0 && *((_QWORD *)v6 + 1) == v7 )
      {
        if ( v8 )
        {
          *((_QWORD *)v6 + 1) = v9;
          _InterlockedAdd(v9 + 2, 1u);
        }
        else
        {
          *((_QWORD *)v6 + 1) = 0LL;
          v8 = 1;
          *v6 = v11 & 0xFFFE;
          v9 = (volatile signed __int32 *)v6;
        }
      }
      v6 += 20;
      --v10;
    }
    while ( v10 );
  }
  v12 = *(_QWORD *)(a2 + 80);
  v13 = *(_WORD *)(v12 + 2);
  v14 = (_OWORD *)(v12 + 40);
  if ( v13 != *(_WORD *)(v12 + 42) )
  {
    switch ( v13 )
    {
      case 1:
        v30 = ConvertToInteger(v12 + 40, (__int64)v36);
        break;
      case 2:
        v30 = ConvertToString(v12 + 40, 0LL, v36);
        break;
      case 3:
        v30 = ConvertToBuffer(v12 + 40, (__int64)v36);
        break;
      default:
        goto LABEL_31;
    }
    v5 = v30;
    if ( v30 < 0 )
      goto LABEL_8;
LABEL_31:
    v14 = v36;
    v38 = 1;
  }
LABEL_8:
  v15 = *(_WORD *)(v12 + 2);
  if ( v15 == *((_WORD *)v14 + 1) )
  {
    v16 = *(_QWORD *)(a2 + 88);
    if ( v15 == 1 )
    {
      *(_WORD *)(v16 + 2) = 3;
      v17 = (unsigned int *)(v12 + 24);
      v18 = (unsigned int *)v14 + 6;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = IsCompatableDSDTRevision() ? 16 : 8;
    }
    else
    {
      *(_WORD *)(v16 + 2) = v15;
      v17 = (unsigned int *)(v12 + 24);
      v18 = (unsigned int *)v14 + 6;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(v12 + 24) + *((_DWORD *)v14 + 6);
      v19 = *(_QWORD *)(a2 + 88);
      if ( *(_WORD *)(v19 + 2) == 2 )
        --*(_DWORD *)(v19 + 24);
    }
    v20 = *(_QWORD *)(a2 + 88);
    v21 = 1381258056;
    if ( *(_WORD *)(v20 + 2) != 2 )
      v21 = 1179992648;
    v22 = HeapAlloc((_QWORD *)gpheapGlobal, v21, *(_DWORD *)(v20 + 24));
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v22;
    if ( v22 )
    {
      v23 = *(_WORD *)(v12 + 2);
      if ( v23 == 1 )
      {
        v34 = IsCompatableDSDTRevision();
        v35 = *(_QWORD **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v34 )
        {
          *v35 = *(_QWORD *)(v12 + 16);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 8LL) = *((_QWORD *)v14 + 2);
        }
        else
        {
          *(_DWORD *)v35 = *(_DWORD *)(v12 + 16);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 4LL) = *((_DWORD *)v14 + 4);
        }
      }
      else
      {
        v24 = *v17;
        v25 = *(const void **)(v12 + 32);
        v26 = v23 == 2;
        v27 = *(void **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v26 )
        {
          memmove(v27, v25, (unsigned int)(v24 - 1));
          v28 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) - 1LL + *v17);
        }
        else
        {
          memmove(v27, v25, v24);
          v28 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + *v17);
        }
        memmove(v28, *((const void **)v14 + 4), *v18);
      }
      if ( !v5 )
        v5 = WriteObject(a1, v7, *(_QWORD *)(a2 + 88));
    }
    else
    {
      v5 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(0x1Bu, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v5 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(a1, -1072431095);
    GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 42LL));
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v31 + 2));
    PrintDebugMessage(0x1Au, ObjectTypeName, v33, 0LL, 0LL);
  }
  if ( v38 )
    FreeDataBuffs((__int64)v36, 1u);
  return v5;
}
