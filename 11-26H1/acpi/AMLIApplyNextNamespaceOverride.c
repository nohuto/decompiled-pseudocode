/*
 * XREFs of AMLIApplyNextNamespaceOverride @ 0x14006DAF8
 * Callers:
 *     AMLIApplyNamespaceOverride @ 0x14006DA88 (AMLIApplyNamespaceOverride.c)
 *     AMLIApplyNextNamespaceOverride @ 0x14006DAF8 (AMLIApplyNextNamespaceOverride.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x140030FE0 (GetNameSpaceObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x14006DAF8 (AMLIApplyNextNamespaceOverride.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

__int64 __fastcall AMLIApplyNextNamespaceOverride(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 *v3; // rdi
  int v4; // ebx
  int NameSpaceObject; // eax
  __int16 v7; // ax
  __int64 v8; // rcx
  int NamespaceOverride; // eax
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  int Src; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+3Ch] [rbp-14h]

  v2 = (__int64 *)(a1 + 24);
  v3 = *(__int64 **)(a1 + 24);
  v4 = 0;
  v11 = 0LL;
  v13 = 0;
  while ( v2 != v3 )
  {
    Src = *((_DWORD *)v3 + 10);
    NameSpaceObject = GetNameSpaceObject(&Src, a2, &v11, 0);
    v4 = NameSpaceObject;
    if ( *((_WORD *)v3 + 33) )
    {
      if ( NameSpaceObject >= 0 )
      {
        v7 = 128;
        goto LABEL_8;
      }
      if ( NameSpaceObject == -1073741772 )
      {
        v4 = CreateNameSpaceObject((_QWORD *)gpheapGlobal, (__int64)&Src, a2, *(_QWORD *)(a2 + 48), &v11, 0);
        if ( v4 >= 0 )
        {
          v7 = 256;
LABEL_8:
          v8 = v11;
          *(_WORD *)(v11 + 64) |= v7;
LABEL_11:
          DereferenceObjectEx(v8);
          v11 = 0LL;
        }
      }
    }
    else
    {
      if ( NameSpaceObject >= 0 )
      {
        NamespaceOverride = AMLIApplyNextNamespaceOverride(v3, v11);
        v8 = v11;
        v4 = NamespaceOverride;
        goto LABEL_11;
      }
      if ( NameSpaceObject == -1073741772 )
        v4 = 0;
    }
    v3 = (__int64 *)*v3;
  }
  return (unsigned int)v4;
}
