/*
 * XREFs of SepFreeResourceInfo @ 0x1403AE8A0
 * Callers:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1403AF8F0 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeResourceInfo(char *P)
{
  void **v2; // r15
  void ***v3; // rbx
  void **v4; // rax
  void **v5; // rcx
  void **v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  void **v9; // rax
  char *v10; // r14
  _QWORD **v11; // rdx
  void **v12; // rax
  int v13; // eax
  char *v14; // r11
  PVOID v15; // r11

  if ( P )
  {
    v2 = (void **)(P + 8);
    while ( 1 )
    {
      v3 = (void ***)*v2;
      if ( *v2 == v2 )
        break;
      if ( ((_DWORD)v3[7] & 1) != 0 )
      {
        v4 = *v3;
        if ( (*v3)[1] != v3 || (v5 = v3[1], *v5 != v3) )
LABEL_24:
          __fastfail(3u);
        *v5 = v4;
        v4[1] = v5;
        *((_DWORD *)v3 + 14) &= ~1u;
        --*(_DWORD *)P;
      }
      v6 = (void **)(v3 + 9);
      while ( 1 )
      {
        v7 = *v6;
        if ( *v6 == v6 )
          break;
        if ( (v7[4] & 2) != 0 )
        {
          v11 = (_QWORD **)v7[2];
          if ( v11[1] != v7 + 2 )
            goto LABEL_24;
          v12 = (void **)v7[3];
          if ( *v12 != v7 + 2 )
            goto LABEL_24;
          *v12 = v11;
          v11[1] = v12;
          *((_DWORD *)v7 + 8) &= ~2u;
          --*((_DWORD *)v3 + 22);
        }
        if ( (v7[4] & 1) != 0 )
        {
          v8 = (_QWORD *)*v7;
          if ( *(_QWORD **)(*v7 + 8LL) != v7 )
            goto LABEL_24;
          v9 = (void **)v7[1];
          if ( *v9 != v7 )
            goto LABEL_24;
          *v9 = v8;
          v8[1] = v9;
          *((_DWORD *)v7 + 8) &= ~1u;
          --*((_DWORD *)v3 + 15);
          if ( (v7[4] & 4) != 0 )
            --*((_DWORD *)v3 + 16);
        }
        ExFreePoolWithTag(v7, 0);
      }
      v10 = (char *)v3[12];
      while ( v10 != (char *)(v3 + 12) )
      {
        v13 = *((_DWORD *)v10 + 4);
        v14 = v10 - 16;
        v10 = *(char **)v10;
        if ( (v13 & 1) == 0 )
        {
          AuthzBasepRemoveSecurityAttributeValueFromLists(v3, v14, 0LL);
          ExFreePoolWithTag(v15, 0);
        }
      }
      ExFreePoolWithTag(v3, 0);
    }
    ExFreePoolWithTag(P, 0);
  }
}
