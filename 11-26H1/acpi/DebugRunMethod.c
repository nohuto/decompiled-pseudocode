/*
 * XREFs of DebugRunMethod @ 0x14006EF70
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     GetBaseObject @ 0x140037400 (GetBaseObject.c)
 *     _strtoui64_0 @ 0x140055D79 (_strtoui64_0.c)
 *     DebugExpr @ 0x14006E99C (DebugExpr.c)
 *     IsNumber @ 0x14006F33C (IsNumber.c)
 *     RunMethodCallBack @ 0x14006F410 (RunMethodCallBack.c)
 */

__int64 __fastcall DebugRunMethod(__int64 a1, char *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // rdx
  char *v10; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // edi
  _BYTE *ObjectPath; // rax
  const char *v15; // rdx
  void *v16; // rdi
  unsigned __int64 v18[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = a1;
  v2 = 0;
  if ( fRunningMethod )
  {
    v4 = 235;
LABEL_25:
    PrintDebugMessage(v4, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_26;
  }
  if ( a2 )
  {
    if ( dword_14008E0B8 == -1 )
    {
      v18[0] = 0LL;
      v19 = 0LL;
      v2 = DebugExpr(a2, v18, &v19);
      if ( !v2 )
      {
        if ( !v19 )
        {
          PrintDebugMessage(0xE8u, 0LL, 0LL, 0LL, 0LL);
LABEL_26:
          v2 = -4;
          goto LABEL_27;
        }
        qword_14008EF58 = GetBaseObject(v19);
        DereferenceObjectEx(v5);
        dword_14008E0B8 = 0;
        return v2;
      }
    }
    else
    {
      if ( dword_14008E0B8 >= 7 )
      {
        v10 = 0LL;
        v11 = 236;
      }
      else
      {
        v6 = 5LL * dword_14008E0B8;
        *(_OWORD *)((char *)&unk_14008EE40 + 8 * v6) = 0LL;
        *(_OWORD *)((char *)&unk_14008EE40 + 8 * v6 + 16) = 0LL;
        *((_QWORD *)&unk_14008EE40 + v6 + 4) = 0LL;
        if ( (unsigned __int8)IsNumber(a2, 0LL) )
        {
          v7 = strtoui64_0(a2, 0LL, 16);
          v8 = dword_14008E0B8;
          v9 = 5LL * dword_14008E0B8;
          *((_QWORD *)&unk_14008EE40 + v9 + 2) = v7;
          *((_WORD *)&unk_14008EE40 + 4 * v9 + 1) = 1;
          dword_14008E0B8 = v8 + 1;
          return v2;
        }
        v10 = a2;
        v11 = 218;
      }
      PrintDebugMessage(v11, v10, 0LL, 0LL, 0LL);
      v2 = -2;
    }
LABEL_27:
    dword_14008E0B8 = -1;
    return v2;
  }
  if ( dword_14008E0B8 < 0 )
  {
    v4 = 226;
    goto LABEL_25;
  }
  qword_14008E770 = 0LL;
  fRunningMethod = 1;
  xmmword_14008E750 = 0LL;
  xmmword_14008E760 = 0LL;
  v12 = AsyncEvalObject(
          qword_14008EF58,
          (__int64)&xmmword_14008E750,
          dword_14008E0B8,
          (__int64)&unk_14008EE40,
          (__int64)RunMethodCallBack,
          0LL,
          1);
  v13 = v12;
  if ( v12 == 32772 )
  {
    ObjectPath = GetObjectPath(qword_14008EF58);
    v15 = byte_140075A82;
    v16 = ObjectPath;
    if ( ObjectPath )
      v15 = ObjectPath;
    ConPrintf("\n%s returned PENDING\n", v15);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
  }
  else
  {
    RunMethodCallBack(qword_14008EF58 + 120, v12, &xmmword_14008E750, 0LL);
    v2 = v13 != 0 ? 0xFFFFFFFC : 0;
  }
  DereferenceObjectEx(qword_14008EF58);
  qword_14008EF58 = 0LL;
  dword_14008E0B8 = -1;
  if ( v2 )
    goto LABEL_27;
  return v2;
}
