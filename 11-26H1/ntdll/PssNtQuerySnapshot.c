/*
 * XREFs of PssNtQuerySnapshot @ 0x1800B2C80
 * Callers:
 *     <none>
 * Callees:
 *     PssNtValidateDescriptor @ 0x1800B31B0 (PssNtValidateDescriptor.c)
 *     PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION @ 0x1800B4774 (PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION.c)
 */

__int64 __fastcall PssNtQuerySnapshot(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 result; // rax
  unsigned int v9; // r10d
  int v10; // edi
  int v11; // edi
  int v12; // eax
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // rax
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = PssNtValidateDescriptor(a1, retaddr);
  v9 = 0;
  if ( (int)result >= 0 )
  {
    if ( a2 <= 5 )
    {
      if ( a2 == 5 )
      {
        if ( a4 == 8 )
        {
          if ( *(_QWORD *)(a1 + 1008) )
          {
            *(_DWORD *)a3 = *(_DWORD *)(a1 + 992);
            *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 1024);
            return v9;
          }
          return (unsigned int)-1073741275;
        }
        return 3221225476LL;
      }
      if ( !a2 )
      {
        if ( a4 == 240 )
          return PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION(a1, a3);
        return 3221225476LL;
      }
      v10 = a2 - 1;
      if ( !v10 )
      {
        if ( a4 == 8 )
        {
          v13 = *(_QWORD *)(a1 + 872);
          if ( v13 )
          {
            *(_QWORD *)a3 = v13;
            return v9;
          }
          return (unsigned int)-1073741275;
        }
        return 3221225476LL;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        if ( a4 == 4 )
        {
          if ( *(_QWORD *)(a1 + 896) )
          {
            v12 = *(_DWORD *)(a1 + 888);
LABEL_10:
            *(_DWORD *)a3 = v12;
            return v9;
          }
          return (unsigned int)-1073741275;
        }
        return 3221225476LL;
      }
      v19 = v11 - 1;
      if ( !v19 )
      {
        if ( a4 == 4 )
        {
          if ( *(_QWORD *)(a1 + 920) )
          {
            v12 = *(_DWORD *)(a1 + 912);
            goto LABEL_10;
          }
          return (unsigned int)-1073741275;
        }
        return 3221225476LL;
      }
      if ( v19 == 1 )
      {
        if ( a4 == 4 )
        {
          if ( *(_QWORD *)(a1 + 976) )
          {
            *(_DWORD *)a3 = *(_DWORD *)(a1 + 960);
            return v9;
          }
          return (unsigned int)-1073741275;
        }
        return 3221225476LL;
      }
      return 3221225475LL;
    }
    v14 = a2 - 6;
    if ( !v14 )
    {
      if ( a4 == 16 )
      {
        v15 = *(_QWORD *)(a1 + 944);
        if ( v15 )
        {
          *(_QWORD *)a3 = v15;
          *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 936);
          return v9;
        }
        return (unsigned int)-1073741275;
      }
      return 3221225476LL;
    }
    v16 = v14 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( !v18 )
        {
          if ( a4 == 40 )
          {
            if ( (*(_BYTE *)(a1 + 4) & 8) != 0 )
            {
              *(_OWORD *)a3 = *(_OWORD *)(a1 + 232);
              *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 248);
              *(_QWORD *)(a3 + 32) = *(_QWORD *)(a1 + 264);
              return v9;
            }
            return (unsigned int)-1073741275;
          }
          return 3221225476LL;
        }
        if ( v18 == 1 )
        {
          if ( a4 == 16 )
          {
            if ( (*(_BYTE *)(a1 + 4) & 0x10) != 0 )
            {
              *(_OWORD *)a3 = *(_OWORD *)(a1 + 1128);
              return v9;
            }
            return (unsigned int)-1073741275;
          }
          return 3221225476LL;
        }
        return 3221225475LL;
      }
      if ( a4 != 112 )
        return 3221225476LL;
      *(_OWORD *)a3 = *(_OWORD *)(a1 + 120);
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 136);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 152);
      *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 168);
      *(_OWORD *)(a3 + 64) = *(_OWORD *)(a1 + 184);
      *(_OWORD *)(a3 + 80) = *(_OWORD *)(a1 + 200);
      *(_OWORD *)(a3 + 96) = *(_OWORD *)(a1 + 216);
    }
    else
    {
      if ( a4 != 96 )
        return 3221225476LL;
      *(_OWORD *)a3 = *(_OWORD *)(a1 + 1032);
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 1048);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 1064);
      *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 1080);
      *(_OWORD *)(a3 + 64) = *(_OWORD *)(a1 + 1096);
      *(_OWORD *)(a3 + 80) = *(_OWORD *)(a1 + 1112);
    }
    return 0LL;
  }
  return result;
}
