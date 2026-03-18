/*
 * XREFs of ?Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z @ 0x1401FD364
 * Callers:
 *     ?UninitializeReferenceTracker@@YAXXZ @ 0x14017E898 (-UninitializeReferenceTracker@@YAXXZ.c)
 *     ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1401C5D74 (-Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@.c)
 * Callees:
 *     ??1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ @ 0x1401FD27C (--1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::Destroy(
        NSInstrumentation::CReferenceTracker::CReferenceCountedType *P)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType::~CReferenceCountedType(P);
  ExFreePoolWithTag(P, 0);
}
